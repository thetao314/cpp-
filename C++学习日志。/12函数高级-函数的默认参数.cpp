#include<iostream>
using namespace std;

//函数的默认参数
//如果某个位置有了默认值，那么从这个位置往后都必须有默认值
//如果函数的声明有了默认参数，那么函数的实现就不能有默认参数
//声明和实现只能有一个有默认参数
int func(int a,int b=20,int c=30){


return a+b+c;


}


int main ()
{
    cout<<func(10,30,40)<<endl;
    system("pause");
    return 0;
}