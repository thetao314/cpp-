#include<iostream>
using namespace std;
#include<string>
int main()
{
//1整型
int a = 0;
cout<<"请给a赋值"<<endl;
cin>>a;
cout<<"a="<<a<<endl;
//2浮点型
float f = 3.14f;
cout<<"请给f赋值"<<endl;
cin>>f;
cout<<"f="<<f<<endl;
//3字符型
char m ='a';
cout<<"请给m赋值:"<<endl;
cin>>m;
cout <<"m="<<m<<endl;
//4字符串型
char n[]="hello";
cout<<"请给n赋值"<<endl;
cin>>n;
cout<<"n="<<n<<endl;
string str="hello";
cout<<"请给str赋值"<<endl;
cin>>n;
cout<<"str="<<n<<endl;
//5布尔型
bool flag=false;
cout<<"请给flag赋值"<<endl;
cin>>flag;
cout<<"flag="<<flag<<endl;
system("pause");
return 0;
}