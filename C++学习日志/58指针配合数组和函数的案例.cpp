#include<iostream>
using namespace std;
                   //此处arr[]可以替换为*arr      //把数组名作为函数参数传递时，会自动转化为指向数组首元素的指针
void bubblesort(int arr[] ,int len){
for (int  i = 0; i < len -1; i++)
{
    for (int  j = 0; j < len-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
    
}
}

void print(int arr[],int len){
    for (int  i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main ()
{
   int arr []={4,3,6,9,1,2,10,8,7,5};
   int len =sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,len);
print (arr,len);


    system("pause");
    return 0;
}