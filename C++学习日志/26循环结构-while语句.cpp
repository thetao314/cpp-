#include<iostream>
using namespace std;
int main ()
{
int num=0;
while (num<10)//要避免死循环，例如在括号中写1.
{
    cout<<num<<endl;
    num+=1;//或者num++
}





    system("pause");
    return 0;
}