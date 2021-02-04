#include<iostream>
#include<algorithm>
#include<vector>


class test  
{
public:   
    test() = default;
    test(int a ) : val(a), next(NULL) {}
//private:   
    int val;
    test* next;
};

int main()
{
    const test b(2);
    test a;
    /*
    if(a.next == NULL)
        std::cout << "a.next == NULL\n";
    if(a.val == 0)
        std::cout << "a.val == 0\n";
    */
}