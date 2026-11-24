#include<iostream>
using namespace std;

class abstractcalculator
{
public:
    virtual int getresult()
    {
        return 0;
    }
virtual ~abstractcalculator() {}
    int num1;
    int num2;

};

//多态好处
//组织结构清晰
//可读性强
class addcalculator:public abstractcalculator
{
public:
    int getresult()
    {
        return num1 + num2 ;
    }

};

class subcalculator:public abstractcalculator
{
public:
    int getresult()
    {
        return num1 - num2 ;
    }

};

class mulcalculator:public abstractcalculator
{
public:
    int getresult()
    {
        return num1 * num2 ;
    }

};



void test01()
{
    abstractcalculator  * abc=new addcalculator;
    abc->num1=10;
    abc->num2=10;
    cout<<"num1"<<"+num2="<<abc->getresult()<<endl;
    delete abc;
}




int main()
{

test01();
    system("pause");
    return 0 ;
}
