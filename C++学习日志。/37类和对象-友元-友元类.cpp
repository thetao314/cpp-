#include <iostream>
using namespace std ;
#include<string>

class Building;
class goodgay
{
public:
    goodgay();
    void visit();//参观函数访问Building中的属性
    ~goodgay();
    Building * building;



};

goodgay::goodgay()
{
building=new Building;
};

void goodgay::visit()
{

    cout<<"好基友类正在访问"<<building->m_sittingroom<<endl;
     cout<<"好基友类正在访问"<<building->m_bedroom<<endl;

};

goodgay::~goodgay()
{
    if (building!=NULL)
    {
        delete building;
        building=NULL;
    }
    
}

class Building
{
  friend  class goodgay;
    Building();
public:
   string m_sittingroom;
private:
   string m_bedroom;
};

//类外写成员函数
 Building:: Building()
{
        m_sittingroom="客厅";
        m_bedroom="卧室";
}

void test01()
{
    goodgay gg;
    gg.visit();
}


int main()
{





    system("pause");
    return 0;
}