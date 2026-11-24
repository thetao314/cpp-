#include <iostream>
using namespace std;
#include<string>

class person{
public:
void  setname(string name){
m_name=name;
}

string getname(){
    return m_name;
}
void setage(int age)
{
 if (age<0||age>150)
 {
   cout<<"fault"<<endl;
   return;

 }
 m_age =age;

}
 
int getage(){
    return m_age;
}

void  setidol(string name){
m_name=name;
}

private:
    string m_name;//可读可写
    int m_age=18;//只读
    string m_idol;//只写

};
      



int main ()
{
person p;
p.setname("张三");
cout<<p.getage();
p.setidol("nana_");





    system("pause");
    return 0;
}