#include<iostream>
#include<memory>


class Member 
{
public:
    Member() 
    {
        m = new int(3);
        std::cout << "Member 构造函数运行\n";
    }
    ~Member() 
    {
        delete m;
        std::cout << "member 析构" << std::endl;
    }   
    int fun()
    {
        int a = count;
        count = 2;
        return a;
    }
    int* m;
    static int count;
};

class Member2
{
public:    
    static int count;
};

class A 
{
public: 
    virtual void foo() 
    {
        std::cout << "foo" << std::endl;
    }   
    void fun()
    {
        std::cout << "A normal function\n";
    }
    virtual ~A()
    {

    }
};
class B: public A 
{ 
public:
    void foo() 
    {
        std::cout << "b foo" << std::endl;
    }
    virtual ~B()
    {

    }
private:
    Member m;
};

int Member::count = 0;
int Member2::count = 1;

int main() 
{   
    Member t;
    t.fun();
    std::cout << "Member::count = " << Member::count <<"\nMember2::count = " << Member2::count << "\n";    
    A* x = new B();
    x->foo();
    x->fun();
    std::cout << "sizeof(B) = " << sizeof(B) << "\n";
    std::cout << "sizeof(Member) = " << sizeof(Member) << "\n";
   delete x;
}  