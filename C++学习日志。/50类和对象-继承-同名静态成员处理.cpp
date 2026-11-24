#include<iostream>
using namespace std;


class base
{
public:
     static void  func ()
    {
        cout<<"base func "<<endl;
    }
    base()
    {
     m_a = 100;
    }
   static int m_a;
};


class son :public base
{
public:
    static void func ()
    {
        cout<<"son func "<<endl;
    }
    son()
    {
        m_a=200;
    }
    static int  m_a;
};


void test01()
{
    son s ;
    cout<<s.m_a<<endl;
    cout<<s.base::m_a<<endl;//对象

    cout<<son::m_a<<endl;
    cout<<son::base::m_a<<endl;//类名

    s.func();
    s.base::func();//对象

    son::func();
    son::base::func();//类名



}




int main ()
{
test01();


    system("pause");
    return 0;
}