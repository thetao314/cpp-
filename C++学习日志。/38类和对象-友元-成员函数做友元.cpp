#include <iostream>
using namespace std ;
#include<string>
class Building;
class goodgay
{
public:
    goodgay();
    void visit();//让他可以访问私有
    void visit2();//让他不可
    ~goodgay();

Building *building ;

};



class Building
{
   friend void goodgay::visit();
public:
    Building();

public:
    string m_sittingroom;

private:
    string m_bedroom;

};


Building::Building()
{
    m_sittingroom="keting";
    m_bedroom="woshi";
}

goodgay::goodgay()
{
    building = new Building;
}

void goodgay:: visit()
{
    cout<<"visit fangwen"<<building->m_sittingroom<<endl;
    cout<<"visit fangwen"<<building->m_bedroom<<endl;
};

void goodgay:: visit2()
{
    cout<<"visit2 fangwen"<<building->m_sittingroom<<endl;
};

goodgay::~goodgay()
{
    if (building!=NULL)
    {
        delete building;
        building=NULL;
    }
    
}

void test01()
{
    goodgay gg;
    gg.visit();
    gg.visit2();
}



int main()
{

    test01();


    system("pause");
    return 0;
}