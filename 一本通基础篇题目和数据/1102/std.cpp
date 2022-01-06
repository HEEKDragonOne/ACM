#include<iostream>  
using namespace std;  
int main()  
{  
    int n,m,a[101];  
    int ans=0;  
    int i;  
      
      
    cin>>n;//共有n个数  
    for(i=1;i<=n;i++)  
        cin>>a[i];//读入n个数  
    cin>>m;//指定数m  
  
    for(i=1;i<=n;i++)//对数据逐个进行比较  
    if(a[i]==m)//若与指定数字相同  
            ans++;//计数器+1  
      
    cout<<ans<<endl;  
      
    return 0;  
}