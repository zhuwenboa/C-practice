#include<iostream>
#include<vector>

void func(int a)
{
    std::cout << "func1" << "\n";
}
//int func(int a);
//void func(int a, int b);
void func(const int a, int b)
{
    std::cout << "func2" << "\n";
}

class test 
{
public:   
    test(int b) : a(b) {}
private:  
    static int count;
    int a;
};

int test::count = 1;

int main()
{
    test t(2);
    func(1);
}