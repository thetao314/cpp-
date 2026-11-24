#include<iostream>
using namespace std;
#include<string>
struct student {
    string name;
    int age;
    int score;
};
void print(struct student s)
{
cout<<s.age<<" "<<s.name<<" "<<s.score<<endl;
}


void print2( const student *p)
{// p->age=20;    const 可以防止类似前面的修改
cout<<p->age<<" "<<p->name<<" "<<p->score<<endl;
}


int main ()
{
struct student s={"zhangsan",18,80};
print (s);
print2(&s);


 
//指针节省空间
    system("pause");
    return 0;
}