#include<stdio.h>

int add(int* x, int y)
{
    return *x = (*x ^ y) + ((*x & y) << 1);
}

int a;

int main()
{
    int b = 2020;
    if(add(&b, 1) || add(&a, 1))
    {
        printf("XiyouLinuxGroup%d\n", b);
        printf("Waiting for y%du!\n", a);
    }
    
}
