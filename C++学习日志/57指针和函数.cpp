#include<iostream>
using namespace std;

void swap(int * p1,int *p2){
int temp=*p1;
*p1=*p2;
*p2=temp;
}


int main ()
{
int a =2;
int b =3;
swap(&a,&b);//传入地址可以改变实参。

cout<<a<<endl;
cout<<b<<endl;
 


    


    system("pause");
    return 0;
}