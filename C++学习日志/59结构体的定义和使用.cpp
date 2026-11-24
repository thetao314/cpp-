
#include<iostream>
using namespace std;
#include<string>;
int main ()
{
    struct student
    {
        //成员列表
        string name;
        int age;
        int score;
    };  
//1
struct student s1;//创建变量可以省略struct
s1.name="张三";
s1.age=18;
s1.score=100;
//2
struct student s2={"lisi",18,150};
//3
 struct student2
    {
        //成员列表
        string name;
        int age;
        int score;
    }s3;
s3.name="张三";
s3.age=18;
s3.score=100;


    system("pause");
    return 0;
}