
#include<iostream>
using namespace std;

//无参无返
void test01(){
    cout<<"this is test01"<<endl;
}
//有参无返
void test02(int a){
    cout<<"this is test02"<<"a="<<a<<endl;
}
//无参有返
int test03(){
    cout<<"this is test03"<<endl;
    return 1000;
}
//有参有返
int test04(int b){
    cout<<"this is test04"<<endl;
    return b;
}

 
int main ()
{
test01();
test02(3);
int a=test03();
cout<<a<<endl;
int m =test04(10000);
cout<<m;


    system("pause");
    return 0;
}
   
