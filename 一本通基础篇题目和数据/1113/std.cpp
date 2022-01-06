#include <iostream>
using namespace std; 
int main() 
{
    int n,a[101];
    int max=-1000000;
    int sum=0;
    int i;
    
    cin>>n;//输入整数个数n
    for(i=1;i<=n;i++)
    {
        cin>>a[i];//输入n个整数
        if(a[i]>max)	max=a[i];//记录最大值
    }
   for(i=1;i<=n;i++)//计算除去与最大值相同的数的和
       if(a[i]!=max)
           sum+=a[i];
    
   cout<<sum<<endl;
   return 0;
}