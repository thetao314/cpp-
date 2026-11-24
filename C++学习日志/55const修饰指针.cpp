#include<iostream>
using namespace std;
int main ()
{
//常量指针
int a =1;
const int * p=&a;
//指针指向可以改
//指针指向的值不可以改  *p=20; fault

//指针常量
int b =2;
int * const p =&b;
//指针指向不可以改   p=&c;  fault
//指针指向的值可以改


//
int c=3;
const int * const p =&c;
//指针指向和指向的值都不可以改  *p=100; fault  p=&a; fault
 




 
    system("pause");
    return 0;
}