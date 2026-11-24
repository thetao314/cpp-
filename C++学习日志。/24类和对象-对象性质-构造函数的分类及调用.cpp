#include<iostream>
using namespace std;

class person
{
public:
    person()
    {

        cout<<"person无参构造函数"<<endl;
    }
    person(int a )
    {
        age=a;
        cout<<"person有参构造函数"<<endl;

    }
    person(const person &p)
    {
        age=p.age;//将传入的人的身上的属性，拷贝到我身上
        cout<<"拷贝构造函数调用"<<endl;

    }

int age;

};
void test01(){

  //1·括号法
  person p;//无参
  person p2(10);//有参
  person p3(p2);//拷贝

//调用默认构造函数时不加小括号
//因为编译器会认为是一个函数的声明

  //2·显示法
person p1;
person p2=person(10);//person(10)为匿名对象，当前行执行结束后，系统会立即回收匿名对象
person p3=person(p2);

//不要利用拷贝构造函数 初始化匿名对象 编译器会认为person(p3)=person p3
//person(p3)

  //3·隐式转换法
person p4 =10;//相当于person p4 =person(10)
person p5 =p4;



}








int main ()
{




    system("pause");
    return 0;
}