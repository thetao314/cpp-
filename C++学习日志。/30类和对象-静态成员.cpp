#include<iostream>
using namespace std;


class person 
{
public:
    //所有对象共用同一份数据
    //编译阶段就分配内存
    //类内声明，类外初始化操作
    static int m_a;

    //静态成员变量也是有访问权限的
private:
static  int m_b;
};

int person::m_a=100;//类外初始化
int person::m_b=200;

void test01()
{
    person p ;
    cout<<p.m_a<<endl;

    person p2 ;
    p2.m_a=200;
    cout<<p.m_a<<endl;//静态成员变量 不属于某个对象上，所有对象共享同一份数据
}

void test02()
{
//静态成员有两种访问方式
//1·通过对象进行访问
person p;
cout<<p.m_a<<endl;
//2·通过类名进行访问
cout<<person::m_a<<endl; 
// cout<<person::m_b<<endl;   私有成员类外不可以访问
}



int main ()
{

test01();


    system("pause");
    return 0;
}