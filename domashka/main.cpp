#include<iostream>
using namespace std;

struct IFly
{
	virtual void PrintFly() = 0;
};
struct ISwim
{
	virtual void PrintSwim() = 0;
};
struct ICrawl
{
	virtual void PrintCrawl() = 0;
};

struct IAnimal
{
	virtual void Move() const = 0;
	virtual void Eat() const = 0;
};

class Animal : public IAnimal
{
protected:
	string color;
	int age;
public:
	Animal() {}
	Animal(string c, int a)
	{
		color = c;
		age = a;
	}
};
class Herbivores : public Animal
{
protected:
	int count_of_food;
public:
	Herbivores() {}
	Herbivores(string c, int a, int count) :Animal(c, a)
	{
		count_of_food = count;
	}
	virtual void Print()
	{
		cout << "Count of food to eat: " << count_of_food << endl;
	}
};
class Elephant : public Herbivores
{
	int trunk_length;
public:
	Elephant() {}
	Elephant(string c, int a, int count, int trunk) : Herbivores(c, a, count)
	{
		trunk_length = trunk;
	}
	void Move() const
	{
		cout << "Elephant is moving" << endl;
	}
	void Eat() const
	{
		cout << "Elephant is eating" << endl;
	}
	void Print()
	{
		Herbivores::Print();
		cout << "Trunk lenght: " << trunk_length << endl;
		cout << endl;
	}

};
class Rabbit : public Herbivores
{
	int speed;
public:
	Rabbit() {}
	Rabbit(string c, int a, int count, int sp) : Herbivores(c, a, count)
	{
		speed = sp;
	}
	void Move() const
	{
		cout << "Rabbit is moving" << endl;
	}
	void Eat() const
	{
		cout << "Rabbit is eating" << endl;
	}
	void Print()
	{
		Herbivores::Print();
		cout << "Speed: " << speed << endl;
		cout << endl;
	}

};
class Giraffe : public Herbivores
{
	int neck_length;
public:
	Giraffe() {}
	Giraffe(string c, int a, int count, int tr) : Herbivores(c, a, count)
	{
		neck_length = tr;
	}
	void Move() const
	{
		cout << "Giraffe is moving" << endl;
	}
	void Eat() const
	{
		cout << "Giraffe is eating" << endl;
	}
	void Print()
	{
		Herbivores::Print();
		cout << "Neck length: " << neck_length << endl;
		cout << endl;
	}

};


class Carnivores : public Animal
{
protected:
	int count_of_food;
public:
	Carnivores() {}
	Carnivores(string c, int a, int count) :Animal(c, a)
	{
		count_of_food = count;
	}
	virtual void Print()
	{
		cout << "Count of food to eat: " << count_of_food << endl;
	}
};
class Wolf : public Carnivores
{
	int speed;
public:
	Wolf() {}
	Wolf(string c, int a, int count, int sp) : Carnivores(c, a, count)
	{
		speed = sp;
	}
	void Move() const
	{
		cout << "Wolf is moving" << endl;
	}
	void Eat() const
	{
		cout << "Wolf is eating" << endl;
	}
	void Print()
	{
		Carnivores::Print();
		cout << "speed: " << speed << endl;
		cout << endl;
	}

};
class Eagle : public Carnivores, public IFly
{
	int max_fly_speed;
public:
	Eagle() {}
	Eagle(string c, int a, int count, int max) : Carnivores(c, a, count)
	{
		max_fly_speed = max;
	}
	void Move() const
	{
		cout << "Eagle is moving" << endl;
	}
	void Eat() const
	{
		cout << "Eagle is eating" << endl;
	}
	void Print()
	{
		Carnivores::Print();
		cout << "Max fly speed: " << max_fly_speed << endl;
		cout << endl;
	}
	void PrintFly()
	{
		cout << "---Eagle is flying---" << endl;
	}

};
class Shark : public Carnivores, public ISwim
{
	int speed2;
public:
	Shark() {}
	Shark(string c, int a, int count, int speed) : Carnivores(c, a, count)
	{
		speed2 = speed;
	}
	void Move() const
	{
		cout << "Shark is moving" << endl;
	}
	void Eat() const
	{
		cout << "Shark is eating" << endl;
	}
	void Print()
	{
		Carnivores::Print();
		cout << "Max speed: " << speed2 << endl;
		cout << endl;
	}
	void PrintSwim()
	{
		cout << "---Shark is swimming---" << endl;
	}

};
class Snake : public Carnivores, public ICrawl
{
	int lenght;
public:
	Snake() {}
	Snake(string c, int a, int count, int len) : Carnivores(c, a, count)
	{
		lenght = len;
	}
	void Move() const
	{
		cout << "Snake is moving" << endl;
	}
	void Eat() const
	{
		cout << "Snake is eating" << endl;
	}
	void Print()
	{
		Carnivores::Print();
		cout << "Snake lenght: " << lenght << endl;
		cout << endl;
	}
	void PrintCrawl()
	{
		cout << "---Snake is crawling---" << endl;
	}

};

int main()
{
	Herbivores* ptr = nullptr;
	ptr = new Elephant("grey", 20, 1000, 10);
	ptr->Eat();
	ptr->Move();
	ptr->Print();
	delete ptr;

	Herbivores* ptr2 = nullptr;
	ptr2 = new Rabbit("white", 5, 100, 60);
	ptr2->Eat();
	ptr2->Move();
	ptr2->Print();
	delete ptr2;

	Herbivores* ptr3 = nullptr;
	ptr3 = new Giraffe("yellow", 15, 500, 5);
	ptr3->Eat();
	ptr3->Move();
	ptr3->Print();
	delete ptr3;

	Carnivores* ptr4 = nullptr;
	ptr4 = new Wolf("grey", 13, 250, 75);
	ptr4->Eat();
	ptr4->Move();
	ptr4->Print();
	delete ptr4;

	Eagle* ptr5 = nullptr;
	ptr5 = new Eagle("brown", 14, 100, 140);
	ptr5->Eat();
	ptr5->Move();
	ptr5->Print();
	ptr5->PrintFly();
	delete ptr5;

	Shark* ptr6 = nullptr;
	ptr6 = new Shark("grey", 25, 2000, 170);
	ptr6->Eat();
	ptr6->Move();
	ptr6->Print();
	ptr6->PrintSwim();
	delete ptr6;

	Snake* ptr7 = nullptr;
	ptr7 = new Snake("yellow", 7, 120, 550);
	ptr7->Eat();
	ptr7->Move();
	ptr7->Print();
	ptr7->PrintCrawl();
	
	delete ptr7;
}
