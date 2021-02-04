#include<iostream>
#include<vector>
#include<memory>

class Base 
{
public:  
    Base(int v) : a(v) {}
    ~Base() {}

    virtual void test()
    {
        std::cout << "Base running\n";
    }
private:  
    int a;
};

class child : public Base
{
public:  
    child(int v) : Base(v) {}
    ~child() {}

    void test() override
    {
        std::cout << "child running\n";
    }
};

int main()
{
    child* p = new child(1);
    Base* t = p;
    Base* r = new Base(2);
    child* q = dynamic_cast<child*>(r);
    if(q == NULL)
    {
        std::cout << "dynamic_cast failed\n";
    }
    else 
        q->test();
}