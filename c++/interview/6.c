#include<stdio.h>

int* get_arr()
{
    int array[1121];
    printf("%d\n", sizeof(array) / sizeof(int));
    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        array[i] = i;
    }
    return array; 
}

int main()
{
    int *p = get_arr();
    int a = p[0];//访问栈上的空间 段错误
}
