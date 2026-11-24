#include<iostream>
using namespace std;

class base
{
     public:
    base()
    {
        cout<<"base---gouzao"<<endl;
    }
    ~base()
    {
        cout<<"base---xigou"<<endl;
    }
};


class son:public base
{
    public:
    son()
    {
        cout<<"son---gouzao"<<endl;
    }
    ~son()
    {
        cout<<"son---xigou"<<endl;
    }
};


void test01()
{
    son s;

    



}



int main ()
{
test01();


    system("pause");
    return 0;
}