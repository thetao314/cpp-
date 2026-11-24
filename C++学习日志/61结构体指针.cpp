#include<iostream>
using namespace std;
#include <string>
struct student
{
    string name;
    int age;
    int score;
};

int main ()
{
    struct student s={"ÕÅÈı",18,100};
    struct student *p=&s; 

   cout<<p->age<<endl;
 







    system("pause");
    return 0;
}