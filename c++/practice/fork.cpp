#include<iostream>
#include<sys/types.h>
#include<unistd.h>

void doit()
{
    fork();
    fork();
    printf("Hello\n");
    return;
}

int main()
{
    doit();
    printf("Hello\n");
    exit(0);
}