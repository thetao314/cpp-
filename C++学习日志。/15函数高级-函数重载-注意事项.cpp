#include<iostream>
using namespace std;


//引用作为重载条件
void func(int &a)
{
cout<<"func(int &a )的调用"<<endl;
}

void func( const int &a)
{
cout<<"func( const int &a )的调用"<<endl;
}
//函数重载遇到函数默认参数



int main ()
{

 const int a = 10;
func(a);





    system("pause");
    return 0;
}