#include<iostream>
using namespace std;
int main()
{
int score=0;
cout<<"请输入您的分数"<<endl;
cin>>score;
cout<<"您的分数为"<<score<<endl;
if (score>600)
{
    cout<<"恭喜恭喜"<<endl;

}
else
{
    cout<<"可惜可惜"<<endl;

}
    system("pause");
    return 0;
}