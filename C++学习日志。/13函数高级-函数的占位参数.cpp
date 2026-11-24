#include<iostream>
using namespace std;
//占位参数

//目前阶段的占位参数用不到
void func(int a ,int){

    cout<<"this is func"<<endl;
}
void func1(int a ,int =10){

    cout<<"this is func"<<endl;
}

int main ()
{

    func(10,20);






    system("pause");
    return 0;
}