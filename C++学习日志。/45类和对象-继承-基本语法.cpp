#include<iostream>
using namespace std;



//class 子类（派生类）：继承方式 父类（基类）

class basepage
{
    public:
void head()
{
 cout<<"编程教程"<<endl;   
}
void wed()
{
cout<<"all kinds of videos"<<endl;
}

};

class python:public basepage
{
public:
void content()
{
 cout<<"python"<<endl;   
}
};


void test01()
{
python py;
py.head();
py.wed();
py.content();


}





int main ()
{
test01();


    system("pause");
    return 0;
}