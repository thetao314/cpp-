#include<iostream>
using namespace std;
int main ()
{
int a=5;
int b=6;
int c=(a>b?a:b);//a>则a，反之则b
cout <<"c="<<c<<endl;
(a>b?a:b)=100;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
    system ("pause");
    return 0;
}