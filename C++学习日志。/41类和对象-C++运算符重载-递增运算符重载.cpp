#include <iostream>
using namespace std ;

class myinteger
{
  friend  ostream & operator<<(ostream&cout,const myinteger & p);
public:
    myinteger()
    {
        m_num=0;
    }

    //重载前置++运算符    返回引用是为了对一个数据进行操作
    myinteger& operator++()
    {
        m_num++;
        return *this;

    }

    //重载后置++运算符
    //int 占位参数，用于区分前置和后置递增
   myinteger operator++(int)
    {
        myinteger temp = *this ;
        m_num++;
        return temp;
    }

private:
    int m_num;
};

ostream & operator<<(ostream&cout,const myinteger & p)
{
    cout<<"m_num="<<p.m_num;
    return cout;

}


void test01()
{
myinteger myint;
cout<<++myint<<endl;
}

void test02()
{
myinteger myint;
cout<<myint++<<endl;
cout<<myint<<endl;
}



int main()
{

test02();



    system("pause");
    return 0;
}