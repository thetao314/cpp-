#include<iostream>
using namespace std;


//常函数
class person
{
public:
    person():m_a() ,m_b(){}
    
    //this指针本质，指针常量，指针的指向不可修改
    void showperson()const//成员函数后加const,this指针被修饰为不可修改指向值的指针
    {
    //    m_a=100;
    m_b=100; 
        


    } 

int m_a;
mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值
};




void test01()
{
    person p;
    p.showperson();
}
//常对象

void test02()
{
    const person p;//在对象前加const，变为常对象
    p.m_b=100;
    //常对象只能调用常函数
    p.showperson();
    //p.func();   
cout<<p.m_a;


}

int main ()
{


test02();

    system("pause");
    return 0;
}