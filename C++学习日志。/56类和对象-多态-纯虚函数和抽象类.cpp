#include <iostream>
using namespace std;


class base{
public:
//纯虚函数
//只要有一个纯虚函数 这个类称为抽象类
//抽象类特点
//1·无法实例化对象         // base b;    fault
                         // new base;    fault
//2·子类必须重写父类中的纯虚函数，否则也属于抽象类
virtual void func()=0;


};

void test01(){
    // base b;
    // new base;
}


int main ()
{


    system ("pause");
    return 0;
}