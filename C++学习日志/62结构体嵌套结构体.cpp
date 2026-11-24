#include<iostream>
using namespace std;
#include <string>
struct student{
   string name;
   int age;
   int score;
};
struct teacher{
    int id;
    string name ;
    int age;
    struct student stu;
};
  
int main ()
{
struct teacher t;

t.age=44;
t.id=10086;
t.name="lee";
t.stu.age=18;
t.stu.name="haha";
t.stu.score=100;


    system("pause");
    return 0;
}