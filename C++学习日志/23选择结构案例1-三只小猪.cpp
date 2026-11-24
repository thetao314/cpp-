#include <iostream>
using namespace std;
int main ()
{
int num1=0;
int num2=0;
int num3=0;
cout <<"请输入小猪a的体重"<<endl;
cin>>num1;
cout <<"请输入小猪b的体重"<<endl;
cin>>num2;
cout <<"请输入小猪c的体重"<<endl;
cin>>num3;
if (num1>num2)
{
if (num1>num3)
{
    cout<<"a best"<<endl;
}
else 
{    cout<<"c best"<<endl;
   

}
}
else{
if (num2>num3)
{
    cout<<"b best"<<endl;

}

else{
    cout<<"c best"<<endl;
}


}

    
    system ("pause");
    return 0;
}