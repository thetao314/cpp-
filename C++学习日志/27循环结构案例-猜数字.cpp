#include<iostream>
using namespace std;
#include<ctime>//添加随机数种子时需要的头文件
int main ()
{
srand((unsigned int)time(NULL));//添加随机数种子，防止每次生成的数字都一样
int num = rand()%100 +1;
int val = 0;
cout<<"请输入数字"<<endl;
while (1)
{cin>>val;
   if (val>num)
{
    cout<<"big"<<endl;
}
else if (val<num)
{
    cout<<"little"<<endl;  
}
else{cout<<"bingo"<<endl;
break;
}
}



    system("pause");
    return 0;
}






