#include<iostream>
#include<memory>

class Bitmap
{
public:  
    Bitmap() : count(new int(0)) {}
    //因为类中存在堆上的对象，所以在赋值的时候要将被赋值对象所占用的堆内存释放
    /*    
    Bitmap& operator = (const Bitmap& a)
    {
        delete count;           //如果是自我赋值，删除自身的内存在去访问会导致非法的行为，所以我们要判断是否为自我赋值。
        count = new int(*a.count);
        return *this;
    }
    */
    //方法1: 防止自我赋值出现上述问题。
    Bitmap& operator = (const Bitmap &a)
    {
        if(this == &a)
        {
            return *this;
        }
        delete count;
        count = new int(*a.count);
        return *this;
    }
    //方法2: 防止自我赋值出现上述问题。
    Bitmap& operator = (const Bitmap &a)
    {
        int *temp = count;
        count = new int(*a.count);
        delete temp;
        return *this;
    }

private:  
    int *count;
};


int main()
{

}
