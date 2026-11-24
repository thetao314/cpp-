#include<iostream>
using namespace std;

//空指针调用成员函数

class person 
{
public:

    void showclassname()
        {
        cout<<"this is person class"<<endl;
        }

    void showpersonage()
        {
            if (this==NULL)
                {
                    return;
                }//防止空指针报错
            cout<<"age="<<m_age<<endl;
        }    

int m_age;
};

void test01()
{
    person*p=NULL;
    p->showclassname();
    // p->showpersonage();报错原因是传入指针为空
}

int main ()
{
test01();

    system("pause");
    return 0;
}