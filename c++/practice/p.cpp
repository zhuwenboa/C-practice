#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int* ptr = (int*)(&a + 1);
    std::cout << *(ptr-1) << "\n";
}