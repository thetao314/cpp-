#include<iostream>
using namespace std;
int main ()
{
 int score=0;
 cout<<"请输入您的分数"<<endl;
 cin>>score;
 cout<<"您输入的分数为"<<endl;
 if (score>600)
 {
    cout<<"恭喜一本"<<endl;
 }
 else if (score>500)
 {
    cout<<"恭喜二本"<<endl;
 }
 else if (score>400)
 {
    cout<<"恭喜三本"<<endl;
 }
else
{
cout<<"fight fight"<<endl;
}
    system("pause");
    return 0;
}