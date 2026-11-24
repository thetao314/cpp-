#include<iostream>
using namespace std;
#include <string>
#include <ctime>
struct student
{
    string name;
    int score;
};


struct teacher
{
    string tname;
    struct student arr[5];
};


void locate(teacher tarr[],int len)
{
    string nameseed="abcde";
   for (int  i = 0; i < len ; i++)
   {
     tarr[i].tname="Teacher_";
     tarr[i].tname+=nameseed[i];
     for (int  j= 0; j < 5; j++)
     {
       tarr[i].arr[j].name="student_";
       tarr[i].arr[j].name+=nameseed[j];
       int random=rand()%61+40;
       tarr[i].arr[j].score=random;
     }
   }  
}



void print(teacher tarr[],int len )
{for (int  i = 0; i < len; i++)
{
    cout<< "老师姓名："<<tarr[i].tname<<endl;
    for (int  j = 0; j < 5;j++)
    {
       cout<<"\t学生姓名:"<<tarr[i].arr[j].name<<"  分数： "<<tarr[i].arr[j].score<<endl;

    }  
}
}



int main ()
{
srand((unsigned int)time(NULL));

struct teacher tarr[3];

int len =sizeof(tarr)/sizeof(tarr[0]);

locate(tarr,len);
print (tarr,len);



 
    system("pause");
    return 0;
}