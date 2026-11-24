#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50};
int max = 0;//先认定最大值为0
for (int i = 0; i < 5; i++)
{
    if (arr[i]>max)
    {
        
        max=arr[i];
    }
    
}
cout<<"最重的为"<<max<<endl;





    system("pause");
    return 0;
}