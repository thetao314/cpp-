#include <iostream>
using namespace std ;


class person
{
public:

      person(int age)
      {
        m_age=new int (age);
      }
    int *m_age;

    ~person()
    {
        if (m_age!=NULL)
        {
            delete m_age;
            m_age=NULL;
        }
    }

 person &operator=(person &p)
    {
        //编译器提供浅拷贝
        //m_age=p.m_age

        //应先判断是否有属性在堆区，如果有，先释放干净，然后再深拷贝
        if (m_age!=NULL)
        {
            delete m_age;
            m_age=NULL;
        }
        //深拷贝
       m_age= new int(*p.m_age);
       //返回对象本身
       return *this;
    }
};


 void test01()
{ 
    person p1(18);
    person p2(20);
    person p3(20);

     p2=p1=p3;
    cout<<"p1年龄为:"<<*p1.m_age<<endl;
    cout<<"p2年龄为:"<<*p2.m_age<<endl;
    cout<<"p3年龄为:"<<*p3.m_age<<endl;

}

int main()
{

test01();


    system("pause");
    return 0;
}