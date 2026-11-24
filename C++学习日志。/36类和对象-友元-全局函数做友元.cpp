#include<iostream>
using namespace std;
#include<string>

class Building
{
   friend void goodgay(Building *building);//全局函数是好朋友，可以访问私有成员
public:
    Building(){
        m_sittingroom="客厅";
        m_bedroom="卧室";
    }



public:
   string m_sittingroom;
private:
   string m_bedroom;
};


//全局函数
void goodgay(Building *building)
{
cout<<"好基友的全局函数正在访问："<<building->m_sittingroom<<endl;
cout<<"好基友的全局函数正在访问："<<building->m_bedroom<<endl;

}


void test01(){
    Building building;
    goodgay(&building);
}





int main()
{

test01();

 system("pause");
 return 0 ;
}