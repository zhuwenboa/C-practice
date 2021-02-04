#include<iostream>
#include<thread>
#include<algorithm>
#include<vector>

volatile int a = 1;

void func()
{
    int n = 5;
    while(n--)
    {
        std::cout << "func a = " <<  a << "\n";
        ++a;
    }
}

void func2()
{
    int n = 5;
    while(n--)
    {
        ++a;
        std::cout << "func2 a = " <<  a << "\n";
    }
}

int main()
{
    std::thread t(func);
    std::thread t2(func2);
    t.join();
    t2.join();
    std::cout << "a = " << a << "\n";
}