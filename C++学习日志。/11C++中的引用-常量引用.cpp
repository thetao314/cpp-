#include<iostream>
using namespace std;

void showvalue(const int &val)//加上const后不会形参修改实参
{
    cout<<val<<endl;
}

int main ()
{     //常量引用
      //使用场景：用来修饰形参，防止误操作
    // const int & ref =10;
    //加入const之后变为只读，不可以修改

int a = 100;
showvalue(a);
cout<<a<<endl;





    system("pause");
    return 0;
}