#include<iostream>
using namespace std;
//new的基本语法
int * func ()
{
    int * p = new int (10);//new什么类型，就会返回什么类型的指针
    return p ;
}
//在堆区利用new开辟数组
void text02()
{
   int * arr = new int[10];//数组有10个元素
   for (int  i = 0; i < 10; i++)
   {
    arr[i]=i+ 100;
   }
   for (int  i = 0; i < 10; i++)
   {
    cout<<arr[i]<<endl;
   }
   delete[] arr;//delete[]  来告诉编译器，要删除的是一个数组
}

int main ()
{
int * p = func();
cout <<*p<<endl;
cout <<*p<<endl;
//堆区的数据，由程序员管理开辟，程序员管理释放
//如果想释放堆区的数据，利用关键字 delete
delete p ;
cout <<*p<<endl;

text02();





    system("pause");
    return 0;
}