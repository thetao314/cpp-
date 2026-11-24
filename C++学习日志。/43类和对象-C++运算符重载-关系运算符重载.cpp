#include <iostream>
using namespace std ;

class person
{
public:    
    person(int age)
    {

        m_age=age;

    }
//жиди==

bool operator==(person &p)
{
    if (this->m_age==p.m_age)
    {   return true;
       
    }
    else 
        return false;



}




    int m_age;

};




void test01()
{
    person p1 (18);
    person p2(18);
    if (p1==p2)
    {
        cout<<"p1=p2"<<endl;
    }
    else
    cout<<"p1!=p2"<<endl;
    
}






int main()
{
test01();


    system("pause");
    return 0;
}