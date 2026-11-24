#include <iostream>
using namespace std ;
#include <string>

//打印输出类

class myprint
{
public:
//重载函数调用运算符
void operator()(string test)
{
    cout<<test<<endl;
}
};


class myadd
{
public:
    int operator()(int num1 ,int num2)
    {
        return num1+num2;
    }


};


void test01()
{
    myprint my ;
    my("hello");//使用起来非常像函数调用，所以称为仿函数
}


void test02()
{
    myadd my;
    int ret = my (18,52);
    cout<<ret<<endl;
    //匿名函数对象
    cout <<myadd()(100,100)<<endl;
}




int main()
{

test01();
test02();

    system("pause");
    return 0;
}