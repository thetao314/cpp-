#include<iostream>
using namespace std;
int main ()
{
//第一种
int arr[2][3];
arr[0][0]=1;
arr[0][1]=1;
arr[0][2]=1;
arr[1][0]=1;
arr[1][1]=1;
arr[1][2]=1;

//第二种
int arr2[2][2]={{0,1},{0,2}};

//第三种
int arr3[2][3]={1,2,3,4,5,6};

for (int i = 0; i < 2; i++)
{for (int j = 0; j < 3; j++)
{
   cout<<arr3[i][j];
}
    cout<<endl;
}
//第四种
int arr4[][3]={1,2,3,4,5,6};

    system("pause");
    return 0;
}
