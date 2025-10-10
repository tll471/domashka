#include <iostream>
#include <time.h>
using namespace std;

class Mobile
{
	string name;
	string surname;
	int size1;
	int* mobile1;
	int size2;
	int* mobile2;

public:
	Mobile(string name, string surname, int arr1[], int arr2[], int size1, int size2)
	{
		this->name = name;
		this->surname = surname;
		this->size1 = size1;
		this->size2 = size2;
		mobile1 = arr1;
		mobile2 = arr2;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;

		cout << "Мобильные телефоны:" << endl;
		selectSort(mobile1, size1);
		cout << "Домашние телефоны: " << endl;
		selectSort(mobile2, size2);
	}

	void selectSort(int a[], long size)
	{
		long i, j, k;
		int x;

		for (i = 0; i < size; i++)
		{
			k = i;
			x = a[i];

			for (j = i + 1; j < size; j++)
				if (a[j] < x) {
					k = j;
					x = a[j];
				}
			a[k] = a[i];
			a[i] = x;
		}

		for (size_t i = 0; i < size; i++)
		{
			cout << a[i] << ", ";
		}
		cout << endl;
	}
};


int main()
{
	srand(time(NULL));
	long size1;
	long size2;


	string name, surname;
	cout << "Enter a name: " << endl;
	cin >> name;
	cout << "Enter a surname: " << endl;
	cin >> surname;

	cout << "Введите количество мобильных телефонных номеров: " << endl;
	cin >> size1;
	int* arr1 = new int[size1];

	for (size_t i = 0; i < size1; i++)
	{
		cout << "Enter a number for: " << i+1 << endl;
		cin >> arr1[i];
	}

	cout << "Введите количество домашних телефонных номеров: " << endl;
	cin >> size2;
	int* arr2 = new int[size2];
	for (size_t i = 0; i < size2; i++)
	{
		cout << "Enter a number for: " << i+1 << endl;
		cin >> arr2[i];
	}

	Mobile obj1(name, surname, arr1, arr2, size1, size2);
	obj1.Print();

}