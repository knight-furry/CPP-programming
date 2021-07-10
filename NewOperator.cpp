#include<iostream>
#include<stdlib.h>
using namespace std;

class NewOperator
{
    public:
    int a;
    int b;

    NewOperator()
    {
        cout<< "Constructor is called.." ;
    }

    NewOperator(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout<<"a = "<< a << endl;
        cout<<"b = "<< b << endl;
    }

    void* operator new(size_t size)
    {
        cout<< "The size associated is: "<< size <<endl;
        void* p = malloc(size);
        return p;
    }

    void operator delete(void * p)
    {
        cout<<"The delete operation is done.."<<endl;
        free(p);
    }
};

int main()
{
    NewOperator* n = new NewOperator(10, 20);
    n->display();
    delete n;
    return 0;
}