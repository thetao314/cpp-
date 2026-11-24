#include <iostream>
using namespace std ;


class person
{
   friend ostream & operator<<(ostream&cout,person & p);
public:
    person(int a ,int b)
    {
        m_a=a;
        m_b=b;
    }
    //一般不用成员函数重载，因为不能实现cout在左侧
private:
   int m_a;
   int m_b; 
};

ostream& operator<<(ostream&cout,person & p)
{
    cout<<"m_a="<<p.m_a<<"m_b="<<p.m_b;
    return cout;

}

void test01()
{
    person p1(10,10);
  

cout<<p1<<endl;
}



int main()
{
test01();




    system("pause");
    return 0;
}