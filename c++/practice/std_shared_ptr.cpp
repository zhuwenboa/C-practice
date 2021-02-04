#include<iostream>
#include<algorithm>
#include<memory>

void endPtr()
{
    std::cout << "析构函数执行\n";
}

struct test 
{
    test() : x(0) {}
    int x;
};


int main()
{
    std::shared_ptr<int> p(std::make_shared<int>(1));
    std::shared_ptr<int> q(p);
    std::shared_ptr<test> t(std::make_shared<test>());
    std::cout << p.use_count() << "\n"; //2
    p.reset(new int(5));
    std::cout << *p << "\n";  //5
    std::cout << p.use_count() << "\n"; //1
    int *tmp = p.get();
    std::cout << "tmp =" << *tmp << "\n";
    {
        auto test = std::shared_ptr<int>(tmp);
        //std::shared_ptr<int> test(q);
        std::cout << test.use_count() << "\n"; //1
    }
    if(tmp == NULL)
        std::cout << "tmp = NULL\n";
    else 
        std::cout << "tmp = " << *tmp << "\n"; //0
    std::cout << p.use_count() << "\n"; //1
    std::cout << *p << "\n";    //0

    std::unique_ptr<int> uq(new int(5));

    std::weak_ptr<int> wp(q);
    q.reset();
    auto a = wp.lock();
    if(a)
    {
        std::cout << a.use_count() << "\n";
    }
}