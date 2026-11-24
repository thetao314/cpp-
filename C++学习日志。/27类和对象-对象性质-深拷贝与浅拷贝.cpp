#include<iostream>
using namespace std;

class person{
public :
person()
{
    cout<<"person的默认函数调用"<<endl;
}
person(int age,int height)
{
   m_height= new int(height);
   m_age=age;
    cout<<"person的有参构造函数调用"<<endl;
}
//自己实现拷贝构造函数 解决浅拷贝带来的问题
person(const person &p){
    m_age=p.m_age;
     cout<<"person的拷贝构造函数调用"<<endl;
     //m_height=p.m_height:编译器默认实现就是这行代码

     //深拷贝操作
     m_height=new int(*p.m_height);

}


~person()
{//将堆区开辟的数据做释放操作
    if (m_height!=NULL)
    {
        delete m_height;
        m_height=NULL;
    }
    
    cout<<"person的析构函数调用"<<endl;
}
int m_age;
int * m_height;
};



void test01(){
    person p1(18,160);
    cout<<"p1 age is "<<p1.m_age<<"height is "<<*p1.m_height<<endl;
    person p2 (p1);
    cout<<"p2 age is "<<p1.m_age<<"height is "<<*p2.m_height<<endl;
}






int main ()
{
test01();


    system("pause");
    return 0;
}