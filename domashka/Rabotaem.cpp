#include<iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(){}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << x << ", " << y << endl;
	}
	bool operator<(Point number)
	{
		return x < number.x;
	}

};
int main()
{
	deque<Point> numbers;
	numbers.push_back(Point(1, 2));
	numbers.push_back(Point(3, 4));
	numbers.push_back(Point(5, 6));

	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
	cout << "----------------------------" << endl;
	for (auto ptr = numbers.begin(); ptr != numbers.end(); ptr++)
	{
		ptr->Print();
	}
	cout << "----------------------------" << endl;
	cout << "Insert" << endl;
	numbers.insert(numbers.begin(), Point(9, 9));
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
	cout << "----------------------------" << endl;
	cout << "Erase" << endl;
	numbers.erase(numbers.begin() + 1);
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
	cout << "----------------------------" << endl;
	cout << "Push_front" << endl;
	numbers.push_front(Point(1,2));
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
	cout << "----------------------------" << endl;
	cout << "Push_back" << endl;
	numbers.push_back(Point(10, 10));
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
	cout << "----------------------------" << endl;
	cout << "Sort" << endl;
	sort(numbers.begin(), numbers.end());
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i].Print();
	}
}
//for (auto ptr = group.begin(); ptr != group.end(); ptr++)

//class Student
//{
//	string name;
//	int age;
//public:
//	Student(){}
//	Student(string n, int a)
//	{
//		name = n;
//		age = a;
//	}
//	void Print()
//	{
//		cout << "Name: " << name << ", Age: " << age << endl;
//	}
//};
//int main()
//{
//	vector<Student> group;
//	group.push_back(Student("Irina", 19));
//	group.push_back(Student("Oleg", 16));
//	group.push_back(Student("Glib", 18));
//	group.push_back(Student("Renat", 17));
//
//	for (size_t i = 0; i < group.size(); i++)
//	{
//		group[i].Print();
//	}
//	cout << "------------------------------" << endl;
//	group.insert(group.begin(), Student("Pavel", 16));
//
//	for (auto ptr = group.begin(); ptr != group.end(); ptr++)
//	{
//		ptr->Print();
//	}
//}