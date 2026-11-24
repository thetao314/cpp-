#include<iostream>
using namespace std;
int main()
{
int arr[]={4,2,8,0,5,7,3,9,10};
for (int i = 1; i < 9-1; i++)//总排序轮数=元素个数-1
{
  //内层循环对比次数=元素个数-当前轮数-1
  for (int j = 0; j < 9-i-1; j++)
  {
    //如果第一个比第二个大，则交换
    if (arr[j]>arr[j+1])
    {
       int temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
    }
    
  }
  
}
for (int i = 0; i < 9; i++)
{
   cout<<arr[i]<<endl;
}





    system("pause");
    return 0;
}