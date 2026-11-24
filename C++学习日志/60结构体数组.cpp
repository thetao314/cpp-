
#include<iostream>
using namespace std;
#include<string>

//定义结构体
 struct student
    {
        //成员列表
        string name;
        int age;
        int score;
    }; 
int main (){
 
//创建结构体数组
struct student arr[3]={{"wang",18,80},{"li",19,88},{"zhao",22,66}};
for (int  i = 0; i < 3; i++)
{
    cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].score<<endl;
}





    system("pause");
    return 0;
}