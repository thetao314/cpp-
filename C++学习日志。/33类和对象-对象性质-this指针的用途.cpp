#include<iostream>
using namespace std;

class person
{
public:
    person(int age)
    {  //this指针指向被调用的成员函数所属的对象
       this->age=age;
    }

    person& personaddage(person & p)
    {
        this->age+=p.age;
        return *this;
    }




    int age;
};

//解决名称冲突
void test01()
{
    person p1(18);
    cout<<p1.age<<endl;

}
//返回对象本身用*this
void test02()
{
person p1(10);
person p2(20);
//链式编程思想
p2.personaddage(p1).personaddage(p1).personaddage(p1).personaddage(p1);
cout<<"p2.age="<<p2.age<<endl;
cout<<"p1.age="<<p1.age<<endl;
}



int main ()
{

test02();


    system("pause");
    return 0;
}