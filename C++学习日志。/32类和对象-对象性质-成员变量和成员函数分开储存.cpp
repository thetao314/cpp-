#include<iostream>
using namespace std;

//成员变量和成员函数分开存储

class person 
{
    int m_a;//非静态成员变量   属于类的对象上
    static int m_b;// 静态成员 不属于类的对象上
    void func(){} //非静态成员函数 不属于类的对象上
    static void func2(){}//静态成员函数 不属于类的对象上
};
int person::m_b=100;

void test01 ()
{
    person p;
    //空对象占用内存空间为1
    //C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址
    cout<<sizeof(p)<<endl;
}


void test02 ()
{
    person p;

    cout<<sizeof(p)<<endl;
}




int main ()
{
test02();

    system("pause");
    return 0;
}