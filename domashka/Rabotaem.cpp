#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
public:
	Student(string n, string s, int a)
	{
		name = n;
		surname = s;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << " Surname: " << surname << "\tAge: " << age << endl;
		cout << endl;
	}
	void Input()
	{
		cout << "Enter Name: ";
		cin >> name;

		cout << "Enter Surname: ";
		cin >> surname;

		cout << "Enter Age: ";
		cin >> age;
	}

	void SaveFile() 
	{
		ofstream out("Text.txt");

		if (out.is_open())
		{
			out << "Name:" << name << endl;
			out << "Surname: " << surname << endl;
			out << "Age: " << age << endl;
			out.close();
		}
		else
		{
			cout << "Could not open the file" << endl;
		}
	}
	void LoadFile()
	{
		ifstream in("Text.txt");

		if (in.is_open())
		{
			do
			{
				char character = '\0';

				in.get(character);

				cout << character;

			}
			// Цикл продолжается до тех пор, пока не наступит конец файла.
			while (in);
		}
		else
		{
			cout << "Could not open the file" << endl;
		}
	}

};

int main()
{
	Student obj1("Ivan", "Ivanov", 19);

	obj1.Print();
	obj1.SaveFile();
	obj1.LoadFile();





}