#include<iostream>
#include<string.h>
using namespace std;

class Vehical
{
    private:
    char color[10];
    int wheels;

    public:
    Vehical(int wheels = 0, const char* color = "")
    {
        this -> wheels = wheels;
        strcpy(this -> color , color);
    }

    const char* getColor()
    {
        return this -> color;
    }

    int getWheels()
    {
        return this -> wheels;
    }

    virtual void display()
    {
        cout<< "Wheels: "<< this -> wheels << endl << "Color: "<< this -> color << endl;
    }

    virtual float totalPrize() = 0;
    virtual float totalDiscount() = 0;

};

class TwoWheeler : public Vehical
{
    protected:
    char Name[10];
    float prize;
    float discount;
    public:
    TwoWheeler(int wheels = 0, const char* color = "", const char* Name = "", float prize = 0.0f, float discount = 0.0f)
    : Vehical(wheels, color)
    {
        strcpy(this -> Name, Name);
        this -> prize = prize;
        this -> discount = discount;
    }

    const char* getName()
    {
        return this->Name;
    }

    float getPrize()
    {
        return this -> prize;
    }

    float getDiscount()
    {
        return this -> discount;
    }

    void display()
    {
        Vehical :: display();
        cout<< "Name: "<< this -> Name << endl << "Prize: "<< this -> prize << endl << "Discount: " << this -> discount << endl;
    }

    float totalPrize()
    {
        return this->prize - this->discount;
    }

    float totalDiscount()
    {
        return this -> discount;
    }

};

class FourWheeler : public TwoWheeler
{
    private:
    float bonusDiscount;
    public:
    FourWheeler(int wheels = 0, const char* color = "", const char* Name = "", float prize = 0.0f, float discount = 0.0f, float bonusDiscount = 0.0f)
    : TwoWheeler(wheels, color, Name, prize, discount)
    {
        this -> bonusDiscount = bonusDiscount;
    }

    float getBonusDiscount()
    {
        return this -> bonusDiscount;
    }

    void display()
    {
        TwoWheeler :: display();
        cout<< "Bonus Discount: "<< this -> bonusDiscount << endl;
    }

    float totalPrize()
    {
        return this->prize - this->discount - this->bonusDiscount;
    }

    float totalDiscount()
    {
        return this -> discount + this -> bonusDiscount;
    }

};

float calculateTotalDiscount(Vehical *ptr[], int n)
{
    float sum = 0.0f;
    for(int i = 0; i < n; i++ )
    {
        sum += ptr[i]->totalDiscount();
    }
    return sum;
}

float calculateTotalPrize(Vehical *ptr[], int n)
{
    float sum = 0.0f;
    for(int i = 0; i < n; i++ )
    {
        sum += ptr[i]->totalPrize();
    }
    return sum;
}

int main()
{
    Vehical *ptr[6];

    ptr[0] = new FourWheeler(4, "Black", "Audi", 1200000.0f, 20000.0f, 2000.0f);
    ptr[1] = new TwoWheeler(2, "Red", "Dukati", 200000.0f, 10000.0f);
    ptr[2] = new FourWheeler(4, "Blue", "Maruti", 300000.0f, 6000.0f, 1000.0f);
    ptr[3] = new FourWheeler(4, "Yellow", "BMW", 1200000.0f, 40000.0f, 7000.0f);
    ptr[4] = new TwoWheeler(2, "Black", "Pulser", 150000.0f, 5000.0f);
    ptr[5] = new FourWheeler(4, "Orange", "TATA", 500000.0f, 10000.0f, 5000.0f);

    for(int i=0; i < 6; i++ )
    {
        ptr[i] -> display();
        cout<<endl;
    }

    cout<< "The Total prize of Vehicals are: " << calculateTotalPrize(ptr, 6) << endl;
    cout<< "The Total discounts on Vehicals are: " << calculateTotalDiscount(ptr, 6) << endl;

    return 0;
}