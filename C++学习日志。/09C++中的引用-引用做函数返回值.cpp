#include<iostream>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量
// int &  text01()
// {
//     int a = 10;
//     return a ;

// }
//2.函数的调用可以作为左值
int &  text02()
{
   static int a = 10;//静态变量，存放在全局区，在程序结束后释放
    return a ;
}





int main ()
{
int &ref=text02();
cout<<ref<<endl;
text02()=1000;//如果函数的返回值是引用，这个函数调用可以作为左值
cout<<ref<<endl;




    system("pause");
    return 0;
}