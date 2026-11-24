#include<iostream>
using namespace std;
int main()
{
//数组的特点
//放在连续的内存空间中
//数组中的每个元素都是相同数据类型

//1
int arr[5];
arr[0]=10;
arr[1]=20;
arr[2]=30;
arr[3]=40;
arr[4]=50;
cout<<arr[0]<<endl;
//2
int arr2[5]={10,20,30,40,50};//如果没有补齐，会用零进行填充
for (int i = 0; i < 5; i++)
{
    cout<<arr2[i]<<endl;
}
//3
int arr3[]={90,80,70,60,50};

    system("pause");
    return 0 ;
}