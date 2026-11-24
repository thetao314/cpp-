#include<iostream>
using namespace std;
int main()
{
int score=0;
cout<<"请给电影打分"<<endl;
cin>>score;
cout <<"您打的分数为："<<score<<endl;
switch (score)
{
    case 10:
    cout<<"您认为是10分电影"<<endl;
    break;
    case 9:
    cout<<"您认为是9分电影"<<endl;
    break;
    case 8:
    cout<<"您认为是8分电影"<<endl;
    break;
    case 7:
    cout<<"您认为是7分电影"<<endl;
    break;
    case 6:
    cout<<"您认为是6分电影"<<endl;
    break;
    case 5:
    cout<<"您认为是5分电影"<<endl;
    break;
    default:
    cout<<"您认为是烂片"<<endl;
    break;
}
    system("pause");
    return 0;
}
//switch 在判断的时候只能是整型或者字符型，但结构清晰，执行效率高
