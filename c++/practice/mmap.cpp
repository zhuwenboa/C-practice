#include<iostream>
#include<vector>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdarg.h>

char* func(char* a, ...)
{
    va_list args;
    va_start(args, a);
    char* buffer = (char*)malloc(1024);
    int len = vsnprintf(buffer, 1024, a, args);
    std::cout << len << "\n";
    va_end(args);
    return buffer;
}

int main()
{
    char a[] = {'h', 'l'};
    char b[] = {'a', 'b'};
    char* p = func(a, b);
    printf("%s\n", p);
}
