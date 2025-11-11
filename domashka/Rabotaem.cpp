#include<iostream>
#include<string>
using namespace std;
class Author
{
	string name;
	string surname;

public:
	Author(string n, string sur)
	{
		name = n;
		surname = sur;
	}
	void Print()
	{
		cout << "---Author info---" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
	}
};
class Human
{
	string name;
	string surname;
	int age;
public:
	Human(string n, string sur, int a)
	{
		name = n;
		surname = sur;
		age = a;
	}
	void Print()
	{
		cout << "---Human info---" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
	}
};
class Library
{
	int count = 0;
public:
	void Count()
	{
		count++;
	}
	void Print()
	{
		cout << "Количество прочитаных книг за день: " << count << endl;
	}
};
class Book
{
	string name;
	int pages;
	Author* author;
	Human human;
	Library* library;
public:
	Book(Author* a, Human& b, Library* l, string n, int page) : author(a), human(b), library(l)
	{
		name = n;
		pages = page;
	}
	void Print()
	{
		cout << "---Book info---" << endl;
		cout << "Name: " << name << endl;
		cout << "Pages: " << pages << endl;
		author->Print();
		human.Print();
		library->Count();
		cout << endl;
	}
};

int main()
{
	Library lib;

	Author person1("Renat", "Koshkin");
	Author person2("Pavel", "Cherkasov");

	Human human1("Glib", "Luibimov", 16);
	Human human2("Oleg", "Barvenok", 16);

	Book book1(&person1, human1, &lib, "Fantastic", 100);
	book1.Print();

	Book book2(&person1, human2, &lib, "Black Hole", 18);
	book1.Print();

	Book book3(&person2, human1, &lib, "Hot dog", 18);
	book1.Print();

	Book book4(&person2, human2, &lib, "Black room", 18);
	book1.Print();

	lib.Print();

}