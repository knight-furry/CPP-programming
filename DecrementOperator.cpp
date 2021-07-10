#include<iostream>
using namespace std;

class op
{
    private:
    int a;
    int b;
    public:
    op(int a=0, int b=0)
    {
        this->a = a;
        this->b = b;
    }

    op operator--(int)
    {
        op o;
        o.a = a--;
        o.b = b--;
        return o;
    }

    op operator--()
    {
        a--;
        b--;
        return *this;
    }

    void display()
    {
        cout<<"a = "<< a <<endl;
        cout<<"b = "<< b <<endl;
    }
};

int main()
{
    op i(10,20);
    cout<< "\nThe object i is: "<< endl;
    i.display();

    op j = i--;
    cout<< "\nThe object j (post-decrement) is: "<< endl;
    j.display();

    op k = --i;
    cout<< "\nThe object k (pre-decrement) is: "<< endl;
    k.display();

    return 0;
}