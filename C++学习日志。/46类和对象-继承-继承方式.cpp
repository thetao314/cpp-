#include<iostream>
using namespace std;


class A
{
    public:
    int a ;
    protected:
    private:
    int c;
};
//公有继承
class B:public A//得到父代public，权限不变
{
    
};
//保护继承
class C:protected A//得到父代public和protected,且变为保护权限，且下一代不能访问
{

};
//私有继承
class D :private A//得到父代public和protected,且变为私有权限,且下一代不能访问
{

};


int main ()
{



    system("pause");
    return 0;
}