#include<iostream>
#include<functional>

std::function<int(int, int)> func;

class Foo
{
public:  
    int operator () (int a, int b)
    {
        return a+b;
    }
    int add(int a, int b)
    {
        std::cout << "a = " << a  << "\n";
        std::cout << "b = " << b << "\n";
        return a+b;
    }
};

std::function<int()> f1;
std::function<int(int)>f2;
int main()
{
    Foo p;
    //func = Foo();
    auto f = std::bind(Foo(), 3, 2);
    func = std::bind(Foo(), std::placeholders::_1, 2);
    std::cout << f() << "\n";
    std::cout << func(1, 2) << "\n";
    f2 = std::bind(&Foo::add, &p, 1, std::placeholders::_1);
    std::cout << f2(3) << "\n";
}