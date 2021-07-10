#include<iostream>
using namespace std;

class TemplateFunction
{
    public:
    int a;
    template <class a1>
    a1 add(a1 x, a1 y)
    {
        return x + y;
    }
};

int main()
{
    TemplateFunction tf;
    cout << "The integer addition: " << tf.add(10, 20) << endl;
    cout << "The float addition: " << tf.add(10.23, 20.23) << endl;
    cout << "The integer addition: " << tf.add(20, 20) << endl;
    return 0;
}