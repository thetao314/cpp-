//全局区：
//全局变量和静态变量存放在此。
//全局区还包含了常量区，字符串常量和其他常量也存放在此。
//该区域的数据在程序结束后由操作系统释放
#include<iostream>
using namespace std;
// 全局变量
int g_a=10;
int g_b=10;
const int c_g_a=10;
const int c_g_b=10;



int main ()
{
//创建普通的局部变量
int a = 10;
int b = 10;
cout<<(int)&a<<" "<<(int)&b<<endl;
//全局变量
cout<<(int)&g_a<<" "<<(int)&g_b<<endl;

//静态变量
static int s_a=10;
static int s_b=10;
cout<<(int)&s_a<<" "<<(int)&s_b<<endl;

//常量
//字符串常量
cout<<(int)&"hello"<<endl;
//const修饰的变量
//1·const修饰的全局变量
cout<<(int)&c_g_a<<" "<<(int)&c_g_b<<endl;
//2·const修饰的局部变量
const int c_l_a=10;
const int c_l_b=10;
cout<<(int)&c_l_a<<" "<<(int)&c_l_b<<endl;




    system("pause");
    return 0;
}
//C++ 中在程序运行前分为全局区和代码区
//代码区特点是共享和只读
//全局区中存放全局变量、静态变量、常量
//常量区中存放 const 修饰的全局常量和字符串常量