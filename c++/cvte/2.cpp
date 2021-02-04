#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>
using namespace std;  
      
int main()
{
    std::vector<int> vec = {1, 10, 14, 5, 9}; //1011459
    int sum = 0;
    std::string tmp;
    std::sort(vec.begin(), vec.end(), 
    [&](const int& a, const int& b)
    {
        int num1 = a;
        int num2 = b;
        vector<int> a1;
        vector<int> b1;
        while(num1 >= 10)
        {
            a1.emplace_back(num1 %= 10);
            num1 /= 10;
        }
        a1.emplace_back(num1);
        while(num2 >= 10)
        {
            b1.emplace_back(num2 %= 10);
            num2 /= 10;
        }
        b1.emplace_back(num2);
        for(auto a : a1)
            std::cout << a << "\n";
        std::cout  << "=====\n";
        for(auto b : b1)
            std::cout << b << "\n";

        int i = a1.size() -1;
        int j = b1.size() -1;
        while(i >=0 && j >=0)
        {
            if(a1[i] > b1[j])
                return false;
            else if(a1[i] < b1[j])
                return true;
            --i;
            --j;
        }
        if(i >= 0)
            return a1[a1.size() - b1.size() - 1] < b1[0];
        else if(j >= 0)
            return b1[b1.size() - a1.size() - 1] < a1[0];
        return true;
    }
    );
    for(int i = 0; i < vec.size(); ++i)
    {
        tmp += std::to_string(vec[i]);
    }
    for(int i = 0; i < tmp.size(); ++i)
    {
        sum = sum * 10 + (tmp[i] - '0'); 
    }
    std::cout << "sum = " << sum << "\n";
}