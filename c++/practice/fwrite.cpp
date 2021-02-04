#include<stdio.h>
#include<iostream>
#include<string.h>

int main()
{
    char buffer[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int i = 0;
    while(true)
    {
        if(i >= 10)
            break;
        FILE* fp = fopen("TEST", "a+");
        fwrite(&buffer[i], 1, 1, fp);
        ++i;
        fclose(fp);
    }
    FILE* fp = fopen("TEST", "r");
    memset(buffer, 0, 10);
    char buf[1024] = {0};
    int n = fread(buf, 1, 1024, fp);
    std::cout << "n = " << n << "\n";
}