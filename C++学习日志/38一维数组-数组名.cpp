#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50,};
cout<<sizeof(arr)<<endl;
cout<<sizeof(arr[0])<<endl;
cout<<(sizeof(arr))/(sizeof(arr[0]))<<endl;
cout<<(int)arr<<endl;//获取首地址
//（int)将16进制转为10进制
cout<<(int)&arr[0]<<endl;//数组中数的地址，加上&
cout<<(int)&arr[1]<<endl;
//数组中每个数，紧挨着，且差4个字节
//数组中的值是常量
    system("pause");
    return 0;
}