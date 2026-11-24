#include<iostream>
using namespace std;
//1·只要创建一个类，C++编译器会给每个类添加至少三个函数
//默认构造  空实现
//析构函数  空实现
//拷贝构造  值拷贝

//2·如果我们写了有参构造函数，编译器就不再提供默认构造

//3·如果我们写了拷贝构造函数，编译器就不再提供默认构造

class person{
public :
person()
{
    cout<<"person的默认函数调用"<<endl;
}
person(int age)
{
   m_age=age;
    cout<<"person的有参构造函数调用"<<endl;
}

person(const person &p){
    m_age=p.m_age;
     cout<<"person的拷贝构造函数调用"<<endl;
}


~person()
{
    cout<<"person的析构函数调用"<<endl;
}
int m_age;
};

void test01(){
    person p ;
    p.m_age=18;
    person p2(p);
    cout<<"p2的年龄为"<<p2.m_age<<endl;
}

void test02(){
    person p;
}






int main ()
{
test01();



    system("pause");
    return 0;
}