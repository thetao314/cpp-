// #include<iostream>
// using namespace std;
// #include <string>
// struct student{
//    string name;
//    int age;
//    int score;
//    void print(){

//     cout<<age<<name<<score<<endl;
// } ;
// };


// int main ()
// {
// struct student s;
// s.name="zhangsan";
// s.age=30;
// s.score=80;
// s.print();

//     system("pause");
//     return 0;
// }
#include<iostream>
using namespace std;
#include <string>
struct student{
   string name;
   int age;
   int score;

};
void print(struct student s){
    s.age=100;//不改变实参
    cout<<s.age<<s.name<<s.score<<endl;
} ;

void print2(struct student * p )
{
    p->age=200;//会改变实参
    cout<<p->name<<p->age<<p->score<<endl;
};





int main ()
{
struct student s;
s.name="zhangsan";
s.age=30;
s.score=80;
print(s);
print2(&s);
cout<<s.age<<s.name<<s.score<<endl;
    system("pause");
    return 0;

}