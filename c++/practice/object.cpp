#include<iostream>
#include<vector>
#include<string>

struct test 
{
    char a;
    int b;
};

class base
{
public:   
    base(char q, int d) : a(q), b(d) {}
    char a;
    int b;
};

class orrive : public base
{
public:  
    orrive(char q, int w, char e, char r) : base(q, w), c(e), d(r) {}
    char c;
    char d;
};

int main()
{
    std::cout << "sizeof(test) = " << sizeof(test) << "\n";
    std::cout << "sizeof(base) = " << sizeof(base) << "\n";
    std::cout << "sizeof(orrive) = " << sizeof(orrive) << "\n";
    orrive t('q', 2, 'w', 'e');
    base* q = &t;
    std::cout << q->b << "\n";
}