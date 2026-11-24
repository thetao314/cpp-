#include<iostream>
using namespace std;
int main ()
{
int a=10;
int * p =&a;
cout<<sizeof(int *)<<endl;

//32位操作系统，指针占4个字节
//64位操作系统，指针占8个字节




    system("pause");
    return 0;
}