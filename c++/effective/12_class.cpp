#include<iostream>

class customer
{
public: 
    customer(const int &a) : data(a) {}
    customer& operator = (const customer& rhs)
    {
        if(this == &rhs)
            return *this;
        data = rhs.data;
        return *this;
    }

private:
    int data;
};

class Vipcustomer : public customer
{
public:  
    Vipcustomer(const int &a, const double &b) : customer(a), discount(b) {}
    Vipcustomer& operator= (const Vipcustomer &rhs)
    {
        customer::operator=(rhs); //调用基类赋值函数
        discount = rhs.discount;
        return *this;
    }
private:  
    double discount;
};