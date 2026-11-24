#include<iostream>
using namespace std;

class base
{
public:
    void func ()
    {
        cout<<"base func "<<endl;
    }
    base()
    {
     m_a = 100;
    }
    int m_a;
};


class son :public base
{
public:
    void func ()
    {
        cout<<"son func "<<endl;
    }
    son()
    {
        m_a=200;
    }
    int m_a;
};

//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//若想访问，要加作用域
void test01()
{
    son s;
    cout<<"son"<<s.m_a<<endl;
    cout<<"base"<<s.base::m_a<<endl;
    s.func();
    s.base::func();
}


int main ()
{

test01();

    system("pause");
    return 0;
}