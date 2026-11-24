#include<iostream>
using namespace std;
int main()
{

//1,字符型变量创建方式
char ch ='a';
char ch2='b';
cout<<ch<<endl;

//2，字符型变量占用内存大小
cout<<sizeof(char)<<endl;

//3，字符型变量常见错误
//不能用双引号
//单引号内只能有一个字符

//4，字符型变量对应ASCII编码

cout<<int(ch)<<endl;
cout<<int(ch2)<<endl;
//a-97  A-65



    system("pause");
    return 0 ;
}