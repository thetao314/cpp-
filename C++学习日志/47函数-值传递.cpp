#include<iostream>
using namespace std;

//如果函数 不需要返回值，声明的时候可以写void
void swap(int num1,int num2)
{

cout<<"交换前"<<endl;
cout<<"num1="<<num1<<endl;
cout<<"num2="<<num2<<endl;

int temp=num1;
num1=num2;
num2=temp;

cout<<"交换后"<<endl;
cout<<"num1="<<num1<<endl;
cout<<"num2="<<num2<<endl;

return ;//返回值不需要时，可以不写return
}

int main ()
{
int a =10;
int b =20;
swap(a,b);
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;//形参不会影响实参


    system("pause");
    return 0;
}