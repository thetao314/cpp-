#include<iostream>
using namespace std;
#include<string>

struct hero
{
    string name;
    int age;
    string sex;
};






void bubblesort(struct hero arr[] , int len ){
for (int i = 0; i < len-1; i++)
{
  for (int j = 0; j < len-i-1; j++)
  {
    if (arr[j].age>arr[j+1].age)
    {
       hero temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
    }
  }
}
}







void print( hero arr[],int len)
{
for (int  i = 0; i < len; i++)
{
    cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].sex<<endl;
}



}




int main ()
{
struct hero arr[5]=
{
    {"Áõ±¸",23,"ÄÐ"},
    {"¹ØÓð",99,"ÄÐ"},
    {"ÕÅ·É",54,"ÄÐ"},
    {"õõ²õ",18,"Å®"},
    {"ÕÔÔÆ",66,"ÄÐ"}
};
int len =sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,len );
print (arr,len );





 
    system("pause");
    return 0;
}