#include <iostream>
using namespace std;
int main()
{
   /*
       换行符    \n
    在终端会换行                     */
    cout<<"hello world\n"<<endl;
   /*反斜杠      \\
                                    */
    cout<<"\\"<<endl;
    /*水平制表符 \t
    可将输出的对齐                                */
    cout<<"aa\thello world"<<endl;
    cout<<"aaaa\thelloworld"<<endl;
    cout<<"aaaaa\thelloworld"<<endl;
    system("pause");
    return 0;
}