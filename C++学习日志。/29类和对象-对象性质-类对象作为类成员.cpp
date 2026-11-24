#include<iostream>
using namespace std;
#include<string>

//类对象作为类成员，
class phone
{
public:

phone(string pname)
{
    m_pname=pname;
}
   string m_pname;
};




class person{
public:

//phone m_phone=pname 隐式转换法
person(string name,string pname):m_name(name),m_phone(pname)
{


};
      //姓名
      string m_name;
      //手机
      phone m_phone;
};

//当其他类为本类成员时，构造时，先构造类对象，再构造自身
//析构顺序与构造顺序相反


void test01()
{
person p ("张三","苹果");
cout<<p.m_name<<"take"<<p.m_phone.m_pname<<endl;
};




int main ()
{

test01();


    system("pause");
    return 0;
}