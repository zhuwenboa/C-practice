#include"test.h"
#include<iostream>
#include<string.h>
typedef struct tag_unimportant
{
    char* t2;
    int t1;
}A;

void func(A** a)
{
    *a = (A*)malloc(sizeof(A));
    //(*a)->t2 = (char*)malloc(sizeof(char));
    (*a)->t1 = 0x20200011;
    (*a)->t2 = (char*)&((*a)->t1);
    *(*a)->t2 = 0x00;
    strcpy((*a)->t2, "xiyoulinux");
}

int main()
{
    A* a;
    func(&a);
    printf("%x\n", a->t1);
    printf("%s\n", a->t2);
    std::cout << sizeof(A) << "\n";
}