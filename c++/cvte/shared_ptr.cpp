#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>

void func(std::shared_ptr<int> t)
{
    std::cout << "delete\n";
}

int main()
{
    std::shared_ptr<int> p(new int(5));
    std::shared_ptr<int> s = NULL;
    //shared_prt不能当作unique_ptr的拷贝构造函数的参数
    //std::unique_ptr<int> q(p);
    {
        std::unique_ptr<int> q(std::make_unique<int>(1));
        //std::unique_ptr<int, decltype(func)*> s(new int(2), func);
     //   std::shared_ptr<int> t(q);
    }
    std::unique_ptr<int> q(std::make_unique<int>(1));
    std::cout << "*p = "<< *p << "\n";
    int* f = new int(1);
    //禁止隐式转换，会报错
    //func(f); 
    func(std::shared_ptr<int>(p));
    std::cout << *p << "\n";
    std::cout << "sizeof(shared_ptr) = " << sizeof(p) << "\n";
    std::cout << "sizeof(unique_ptr) = " << sizeof(q) << "\n";

}