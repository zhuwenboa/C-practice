#include<iostream>

class base 
{
public:
    int a;
    base(int x) : a(x) {}
    virtual int func()
    {
        return a;
    }
};

class A :  virtual public base
{
public:   
    A(int x) : base(x) {}
};

class B : virtual public base 
{
public:  
    B(int x) : base(x) {}
};  

class D : public A, public B
{
public:  
    D(int x) : A(x), B(x), base(x) {}
};

int main()
{
    D d(1);
    base x(2);
    base* q = &d;
    std::cout << "q.a = " << q->a << "\n";
    std::cout << "sizeof(A) " << sizeof(A) << "\n";
    std::cout << "sizeof(B) " << sizeof(B) << "\n";
    std::cout << "sizeof(D) " << sizeof(D) << "\n";
}