#include<iostream>

using namespace std;

void func(int a, int b, int c, int d, int e, int f, int h)
{
    cout << &a  << "\n";
    cout << &b  << "\n";
    cout << &c  << "\n";
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    func(1,2,3,4,5,6,7);
}