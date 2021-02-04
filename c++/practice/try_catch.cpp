#include<iostream>
#include<vector>

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    try
    {
        if(vec.size() > 10)
            throw -1;
        else
        {
            throw 1;
        }
        
    }
    catch(int n)
    {
        if(n == 1)
            std::cout << "vec.size <= 10\n";
        if(n == -1)
            std::cout << "vec.size > 10\n";
    }
    

}