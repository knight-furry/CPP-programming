#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	char name[10];
	int age;
	public:

	Person(const char* name = "", int age = 0)
	{
		strcpy(this->name, name);
		this->age = age;
	}

	void setName(const char* name = "")
	{
		strcpy(this->name, name);
	}
	void setAge(int age=0)
	{
		this->age= age;
	}

	char* getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}

	void display()
	{
		cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
	}
};

class Employee: public Person
{
	int id;
	float sal;

	public:

	Employee(const char* name = "", int age = 0, int id= 0 , float sal = 0.0f) : Person(name, age)
	{
		this->id = id;
		this->sal = sal;
	}

	void setId(int id = 0)
	{
		this->id = id;
	}
	void setSal(float sal=0.0f)
	{
		this->sal = sal;
	}

	int getId()
	{
		return this->id;
	}
	float getSal()
	{
		return this->sal;
	}

	void display()
	{
		Person :: display();
		cout<<"Id: "<<this->id<<endl<<"Salary: "<<this->sal<<endl;
	}
};

int main()
{
	Person p1("Datta", 20);
	Employee e1("Yogesh", 20, 10, 1000);
	cout<<"The full object is: \n";
	e1.display();
	//Now object slicing is by assignment 
	
	cout<<endl<<endl<<"The output object slicing is: \n";
	p1 = e1;
	p1.display();

	//by using pointer
	cout<<endl<<endl<<"The output object slicing is: \n";
	Person *ptr = &e1;
	ptr->display();

	//by using reference variable
	cout<<endl<<endl<<"The output object slicing is: \n";
	Person &p = e1;
	p.display();
	
	return 0;
}