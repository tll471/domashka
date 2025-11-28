#include<iostream>
#include <list>
#include <algorithm>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student(){}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << endl;
	}
	string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}

	bool operator< (Student& obj)
	{
		if (age < obj.age)
		{
			return age < obj.age;
		}
		return name < obj.name;
	}
};

ostream& operator<<(ostream& os, Student& obj)
{
	os << "Name: " << obj.GetName() << " Age: " << obj.GetAge() << endl;
	return os;
}

int main()
{
	list<Student> arr;
	arr.push_back(Student("Renat", 17));
	arr.push_back(Student("Oleg", 17));
	arr.push_back(Student("Glib", 16));
	arr.push_back(Student("Pavel", 17));

	for (auto i : arr)
	{
		cout << i << endl;
	}
	
	cout << "---Delete---" << endl;
	arr.pop_front();
	for (auto i : arr)
	{
		cout << i << endl;
	}
	cout << "---Add---" << endl;
	string name;
	int age;
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter age: " << endl;
	cin >> age;
	arr.push_back(Student(name, age));

	cout << "---Sort---" << endl;
	arr.sort();
	for (auto i : arr)
	{
		cout << i << endl;
	}


		
	
}
