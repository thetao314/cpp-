#include<iostream>
using namespace std;

int * func()//形参数据也放在栈区
{
    int a =10;//局部变量，存放在栈区，栈区的数据在执行完后自动释放
    return &a;//返回局部变量地址
}


int main ()
{
//接受func函数的返回值、
int * p =func();
cout<<*p<<endl;





    system("pause");
    return 0;
}
//栈区数据注意事项----不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放