#include<iostream>
using namespace std;
int main ()
{
    //定义指针
    int a =10;
    int * p;
    p=&a; 
    cout<<&a<<endl;
    cout<<p<<endl;//指针就是记录地址
    *p=100000;
    cout<<a<<endl;
    cout<<*p<<endl;




 
    system("pause");
    return 0;
}