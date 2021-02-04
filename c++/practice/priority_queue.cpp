#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

class Time 
{
public:  
    Time(int a) : expire(a) {}

public:  
    int expire;
};

struct Time_compare
{
    bool operator() (const Time& a, const Time& b)
    {
        return a.expire > b.expire;
    }
};

bool Time_compare1(const Time& a, const Time& b)
{
    return a.expire > b.expire;
}

int main()
{
    //std::function<bool(const Time&, const Time&)> compare = Time_compare1;   
    std::priority_queue<Time, std::vector<Time>, Time_compare> p;
    for(int i = 10; i > 0; --i)
    {
        Time temp(i);
        p.push(temp);
    }
    std::cout << p.size() << "\n";
    for(int i = 0; i < 10; ++i)
    {
        Time temp = p.top();
        p.pop();
        std::cout << temp.expire << "\n";
    }
    return 0;    
}