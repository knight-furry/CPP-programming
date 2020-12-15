#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	protected:
	char name[20];
	int age;
	int id;
	float sal;

	public:
	Employee(const char* name = "", int age = 0, int id = 0, float sal = 0.0f)
	{
		strcpy(this->name, name);
		this->age = age;
		this->id = id;
		this->sal = sal;
	}

	char* getName()
	{
		return this->name;
	}

	int getAge()
	{
		return this->age;
	}
	
	int getId()
	{
		return this->id;
	}

	float getSal()
	{
		return this->sal;
	}

	virtual float calculateSalary()
	{
		return this->sal;
	}

	virtual void display()
	{
		cout<<"Name: "<< this->name << endl <<"Age: " << this->age <<endl <<"ID: "<<this->id <<endl << "Salary: "<<this->sal <<endl;
	}
};

class Manager : public Employee
{
	float bonus;
	public:
	Manager(const char* name = "", int age = 0, int id = 0, float sal = 0.0f, float bonus = 0.0f) : Employee(name, age, id, sal)
	{
		this->bonus = bonus;
	}

	float getBonus()
	{
		return this->bonus;
	}

	float calculateSalary()
	{
		return (this->sal + this->bonus);
	}

	void display()
	{
		cout<<"\n ===== Manager ====="<<endl;
		Employee :: display();
		cout<<"Bonus: "<<this->bonus<<endl;
	}
};

class SalesMan : public Employee
{
	float incentive;
	public:
	SalesMan(const char* name = "", int age = 0, int id = 0, float sal = 0.0f, float incentive = 0.0f) : Employee(name, age, id, sal)
	{
		this->incentive = incentive;
	}

	float getIncentive()
	{
		return this->incentive;
	}

	float calculateSalary()
	{
		return (this->sal + this->incentive);
	}

	void display()
	{
		cout<<"\n ===== SalesMan ====="<<endl;
		Employee :: display();
		cout<<"Incentive: "<<this->incentive<<endl;
	}
};

void displayAllEmployee(Employee* arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		arr[i]->display();
	}
}

float Total_income(Employee* arr[], int n)
{
	float total = 0;
	for(int i = 0; i < n; i++)
	{
		total += arr[i]->calculateSalary();
	}
	return total;
}

int main()
{
	Employee* arr[4];
	arr[0] = new Employee("Datta", 21, 11, 150000.0f);
	arr[1] = new Manager("Mahesh", 24, 122, 150000.0f, 5000.0f);
	arr[2] = new SalesMan("Amol", 33, 321, 150000.0f, 2000.0f);
	arr[3] = new Manager("Sidhhesh", 21, 123, 150000.0f, 5000.0f);

	displayAllEmployee(arr, 4);
	float totalSalary = Total_income(arr, 4);
	cout<<"\n\nThe Total Outgoing of compony is : "<<totalSalary <<endl<<endl;
	return 0;
}