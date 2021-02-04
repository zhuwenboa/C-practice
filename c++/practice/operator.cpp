#include<iostream>
#include<vector>
#include<algorithm>

class Op
{
public:  
    Op(std::string n, std::string I) :  name(n), Id(I)
    {}
    friend std::ostream& operator << (std::ostream& os, const Op& a)
    {
        os << "name = " << a.name << "\n";
        os << "Id = "  << a.Id << "\n";
        return os;
    }
    friend std::istream& operator >> (std::istream& in, Op& a)
    {
        in >> a.name;
        in >> a.Id;
    }

private:  
    std::string name;
    std::string Id;
};

int main()
{
    Op test("zhuwenbo", "111");
    std::cout << test;
    std::cin >> test;
    std::cout << test;
}