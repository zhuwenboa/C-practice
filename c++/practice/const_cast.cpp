#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    int *p  = new int(1);
    const int* t = p;
    int* q = const_cast<int*>(t);
    std::cout << "*q = " << *q << "\n";
    *q = 2;
    std::cout << "*t = " << *t << "\n";
}