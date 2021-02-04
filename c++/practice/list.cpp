#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
#include<memory>

template<typename T>  
class List_Node;


template<typename T> 
class List_Node 
{
public:  
    typedef List_Node<T> Value_type;
    List_Node(int data) : val(data), next(NULL), prev(NULL) {}
    List_Node() : val(INT32_MIN), next(NULL), prev(NULL) {}
public:   
    Value_type* next;
    Value_type* prev;
    
private:  
    int val;
};

template<typename T>
class List 
{
public:  
    List() : head(NULL), tail(NULL) {}
    ~List()
    {
        while(head !=  NULL)
        {
            auto tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    void Init()
    {
        head = new List_Node<T>();
        tail = head;
    }
    void push(int data)
    {
        if(head == tail)
        {
                        
        }   
    }
private:  
    List_Node<T>* head;
    List_Node<T>* tail;
};

int main()
{

}