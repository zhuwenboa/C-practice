#include<iostream>
#include<vector>

class test
{
public:  
    //test() = default;
    /*
    {
        std::cout << "-----运行\n";
    }
    */    
    test(std::vector<int> temp)
    {
        vec = temp;
        number = 1;
    }
private:  
    std::vector<int> vec;
    int number;
};

int main(int argc, char *argv[])
{
    std::vector<int> vec(1);
    test a(vec);
}