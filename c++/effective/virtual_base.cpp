#include<iostream>
#include<memory>

class base
{
public:  
    base() : str(new char('a')) 
    {
        std::cout << "基类构造函数运行\n";
    }
    //virtual ~base()
    ~base()
    {
        std::cout << "基类析构函数运行\n";
        delete str;
    }

private:  
    char *str;
};

class derived : public base
{
public:  
    derived() : base(), der(new char('b')) {std::cout << "派生类构造函数运行\n";}
    //virtual ~derived()
    ~derived()
    {
        delete der;
        std::cout << "派生类析构函数运行\n";
    }

private:  
    char *der;
};


int main()
{
    base *c = new derived();
    delete c;

}
