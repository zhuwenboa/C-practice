#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

class compare
{
public:   
    bool operator() (const int& a, const int& b)
    {
        return a > b;
    }
};

bool func(const int& a, const int& b)
{
    return a > b;
}

int main()
{
    int a = 2, b = 3;
    auto f = [] (const int& a, const int& b) {return a > b;};
    bool (*fun)(const int& a, const int& b ) = func;
    fun(a, b);
    f(a, b);
    compare t;
    t(a, b);
}