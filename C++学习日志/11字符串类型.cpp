#include<iostream>
using namespace std;
#include<string>//C++风格字符串需要这个头文件
int main()
{

//C风格的字符串,中括号，双引号
char str []="hello world";
cout<<str<<endl;
 //C++风格字符串，要写头文件
string str2 ="hi world";
cout<<str2<<endl;


system("pause");
return 0;
}