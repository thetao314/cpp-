//浮点型变量 单精度float  7位      双精度double  15-16
//默认情况下，输入一个小数会输出6位有效数字
#include <iostream>
using namespace std;
int main() 
{

float f1=3.1415926;
double d1=3.1415926;
cout<<f1<< endl;
cout<<d1<< endl;

cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;


float f2 = 3e2;
double d2=3e-2;
cout<<f2<<endl;
cout<<d2<<endl;


    system("pause");
    return 0;

}