#include <iostream>
using namespace std;

void FillNumbers(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + 1;
	}
}
void Print(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}
void AddNumber(int size, int* arr, int key)
{

	int* temp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = key;

	size += 1;
	arr = temp;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	
}
void AddNumberToStart(int size, int* arr, int key)
{

	int* temp = new int[size + 1];
	for (size_t i = 1; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[0] = key;

	arr = temp;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

}
void Index(int size, int* arr, int index, int key)
{
	int* temp = new int[size+1];

	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	temp[index] = key;

	for (int i = index; i < size; i++)
	{
		temp[i+1] = arr[i];
	}


	for (int i = 0; i < size+1; i++)
	{
		cout << temp[i] << ", ";
	}
	cout << endl;
}
void AddArr(int size, int* arr, int *mas)
{
	int big_size = size + 3;
	int* temp = new int[big_size];

	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		temp[i+size] = mas[i];
	}

	for (int i = 0; i < big_size; i++)
	{
		cout << temp[i] << ", ";
	}
	cout << endl;
}
void DeleteLast(int size, int* arr)
{
	int new_size = size - 1;
	int* temp = new int[new_size];

	for (size_t i = 0; i < new_size; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = 0; i < new_size; i++)
	{
		cout << temp[i] << ", ";
	}
	cout << endl;
}
void DeleteFirst(int size, int* arr)
{
	int* temp = new int[size-1];

	for (size_t i = 1; i < size; i++)
	{
		temp[i-1] = arr[i];
	}

	for (int i = 0; i < size-1; i++)
	{
		cout << temp[i] << ", ";
	}
	cout << endl;
}
void DeleteArr(int size, int* arr, int* mas)
{
	int* temp = new int[size];

	cout << "В массиве: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	bool find = false;
	for (size_t i = 0; i < size; i++)
	{
		
		for (size_t j = 0; j < size; j++)
		{
			if (arr[i] == mas[j])
			{
				cout << "Есть совпадение!" << endl;
				find = true;
			}
		}

	}
	if (!find)
	{
		cout << "Нет совпадений!" << endl;
	}
}

int main()
{
	srand(time(NULL));
	int size;
	cout << "Enter a size: " << endl;
	int* arr = nullptr;
	try {
		cin >> size;
		if (size <= 0)
		{
			throw "size <= 0";
		}
		arr = new int[size] {0};
	}
	catch (const char* str)
	{
		cout << str << endl;
	}

	FillNumbers(size, arr);
	Print(size, arr);
	cout << "Добавить число к концу массива: " << endl;
	AddNumber(size, arr, 5);
	cout << "Добавить число к началу массива: " << endl;
	AddNumberToStart(size, arr, 5);
	cout << "Изменение инекса числом: " << endl;
	Index(size, arr, 2, 1000);
	int mas[3] = { 0, 1, 2 };
	cout << "Добавляем массив: " << endl;
	AddArr(size, arr, mas);
	cout << "Удаляем последнюю цифру массива: " << endl;
	DeleteLast(size, arr);
	cout << "Удаляем первую цифру массива: " << endl;
	DeleteFirst(size, arr);
	int mas1[3] = { 1, 2, 3 };
	cout << "Ищем совпадения: " << endl;
	DeleteArr(size, arr, mas);

	delete[] arr;
}