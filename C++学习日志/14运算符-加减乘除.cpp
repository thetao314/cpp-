#include<iostream>
using namespace std;
int main()
{
int a1=10;
int b1=3;

cout<<a1+b1<<endl;
cout<<a1-b1<<endl;
cout<<a1*b1<<endl;//两个整数相除，结果为整数，将小数部分去除
                  //分母不能为0
cout<<a1/b1<<endl;
int a2=10;
int b2=20;
cout<<a2*b2<<endl;

//小数也可以相除
double d1=0.5;
double d2=0.25;
cout<<d1/d2<<endl;


    system("pause");
    return 0;
}