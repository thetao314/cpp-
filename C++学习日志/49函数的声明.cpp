
#include<iostream>
using namespace std;

int max (int a ,int b );//函数的声明，定义可以后置
                        //声明可以写多次，定义只能写一次

int main ()
{
int a=20;
int b=30;
cout<<max(a,b)<<endl;
 


    system("pause");
    return 0;
}



int max (int a ,int b )
{
return a>b?a:b;}