#include<iostream>
using namespace std;

class animal
{
public:
    int m_age;


};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//animal类称为 虚基类
class sheep : virtual public animal 
{

};

class tuo :virtual public animal 
{

};

class yangtuo:public sheep , public tuo
{

};




void test01 ()
{
    yangtuo yt;
    yt.sheep::m_age=18;
    yt.tuo::m_age=20;
    //虚继承后，二者相当于一个数据
    cout<<"sheep uder="<< yt.sheep::m_age<<endl;
    cout<<"tuo uder="<< yt.tuo::m_age<<endl;
    //菱形继承导致数据有两份，浪费资源
    cout<<yt.m_age<<endl;

}



int main ()
{

test01();

    system("pause");
    return 0;
}