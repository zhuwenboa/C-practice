#include<iostream>
#include<vector>

class Solution
{
public:
    int a;
    virtual void e() {std::cout << "Solutin::e func is running\n";}
    virtual void b() {std::cout << "Solutin::b func is running\n";}
    virtual void c() {std::cout << "Solutin::c func is running\n";}
};

int main()
{
    std::cout << sizeof(Solution) << "\n";
}