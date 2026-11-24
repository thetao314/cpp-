#include<iostream>
using namespace std;
int main()
{
//continue,执行完本行就不执行后面的代码了，直接进入下一个循环
for (int i = 0; i <101; i++)
{
  if (i%2==0)
  {
    continue;
  }
    cout<<i<<endl;
    
}
    system("pause");
    return 0;
}
//break会退出循环，而continue不会