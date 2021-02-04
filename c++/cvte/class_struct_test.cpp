#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class test 
{
public:  
    test(int a) : count(a) {}

private:  
    int count;
};

void func(struct test* a)
{
    std::cout << "true" << "\n";
    //std::cout << a->count << "\n";
}

int main()
{
    int* a = new int(1);
    free(a);
    test t(1);
    func(&t);
}