#include<iostream>
#include<algorithm>
#include<vector>

int func(const int* p);
int func(int* p);
int func(const int* const p);


int func(const int* p)
{
    std::cout << "const int* p running\n";
    return *p;
}

int func(int* p)
{
    std::cout << "int* p running\n";
    return *p;
}

/*
int func(const int* const p)
{
    std::cout << "const int* p running\n";
    return *p;
}
*/

int func1(int a, int b)
{
    return a + b;
}

int func1(int a, int b, int c = 1)
{
    return a + b + c;
}


int main()
{
    int a = 1, b = 2;
    func1(a, b, 3);
    //func1(a, b);
}