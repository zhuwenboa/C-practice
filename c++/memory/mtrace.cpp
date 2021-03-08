#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>
#include<mcheck.h>

int main()
{
    mtrace();
    int* p = new int(3);
    muntrace();
    return 0;    
}
