#include<iostream>
using namespace std;
//交换函数

//1值传递
void myswap01(int a ,int b){
     int temp =a;
     a=b;
     b=temp;
}

//2地址传递
void myswap02(int * a ,int * b){
     int  temp =*a;
    *a=*b;
     *b=temp;
}
//3引用传递  也可以形参修饰实参
void myswap03(int &  a ,int & b){
     int temp =a;
     a=b;
     b=temp;
}



int main ()
{








    system("pause");
    return 0;
}