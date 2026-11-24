#include<iostream>
using namespace std;
int main()
{
//逻辑运算符  非  ！
int a=10;
cout<<!a<<endl;
cout<<!!a<<endl;
//逻辑运算符  与   &&
int b=10;
int c=0;
cout<<(b&&c)<<endl;//同真为真，其余为假
//逻辑运算符  或  ||
int m=0;
int n=1;
cout<<(m||n)<<endl;//同假为假，其余为真

system("pause");
return 0;
}