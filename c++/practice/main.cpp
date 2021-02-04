#include"test.h"
#include<iostream>

int main()
{
    int a = 1;
    int b = 2;
    if(compare(a,b))
    {
        std::cout << "a > b\n";
    }
    else 
    {
        std::cout << "a < b\n";
    }
}