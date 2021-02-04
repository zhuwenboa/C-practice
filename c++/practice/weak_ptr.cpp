#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>

class my_practice;
void func1(std::shared_ptr<my_practice> a)
{
    std::cout << a.use_count() << "\n";
}


class my_practice : public std::enable_shared_from_this<my_practice>
{
public:  
    my_practice(int a) : data(a) {}
    void test(int b)
    {
        data = b;
        func1(std::shared_ptr<my_practice>(new my_practice(*this)));
        func1(shared_from_this());        
    }
private:  
    int data;    
};

int main()
{   
    std::shared_ptr<my_practice> p(new my_practice(1));
    p->test(2);
}