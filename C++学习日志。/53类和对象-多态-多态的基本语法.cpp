#include <iostream>
using namespace std;


class aniaml
{
public:
    virtual void speak()
    {
        cout<<"动物在说话"<<endl;
    }
};



class cat:public aniaml
{
public: 
    void speak()
    {
        cout<<"小猫在说话"<<endl;
    }
};
//动态多态满足条件
//1·有继承关系
//2·子类重写父类虚函数

//动态多态使用
//父类的引用或者指针  执行子类对象
void dospeak(aniaml& ani)//用父类的引用或者指针来接受子类对象
{
    ani.speak();
}


void test01()
{
    cat mimi;
    dospeak(mimi);


}


int main()
{
test01();

    system("pause");
    return 0;
}