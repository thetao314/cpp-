#include<iostream>
using namespace std;
int main ()
{
    //空指针
    //空指针用于给指针变量初始化
    int *p =NULL;
    //空指针不可进行访问
    //o-255为系统占用内存，不允许用户访问
    *p=100;
    cout<<*p<<endl;











 
    system("pause");
    return 0;
}