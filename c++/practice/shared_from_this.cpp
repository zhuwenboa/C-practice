#include<iostream>
#include<memory>
#include<algorithm>

class test : public std::enable_shared_from_this<test>
{
public:  
    std::shared_ptr<test> getShared_ptr()
    {
        return shared_from_this();
    }    

private:  
    
};

int main()
{
    //test p;
    std::shared_ptr<test> p = std::make_shared<test>();
    auto a = p->getShared_ptr();    
    std::cout << a.use_count() << "\n";
}