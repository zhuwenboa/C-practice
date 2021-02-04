#include<iostream>
#include<vector>
#include<algorithm>

template<class T>
class  My_item;

template<typename T>
class List
{
public:
    typedef T value_type;
    List(T a) : value(a), next(NULL) {}
private:  
    T value;
    T *next;
};
template <class I>
class My_item  
{
public:  
    typename I::value_type func(I a)
    {
        std::cout << "\\\\n";
    }
private:  

};