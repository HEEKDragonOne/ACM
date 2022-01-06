#include<iostream>
using namespace std; 
int main() 
{
    int n,a[100001];
    int max=-9999,len=1;
    int i;
    
    cin>>n;//输入数组大小n
    a[0]=-3456497;//保证a[0]与a[1]不相同
    for(i=1;i<=n;i++)
    {
        cin>>a[i];//输入元素
    	if(a[i]==a[i-1])//若当前元素与之前一个元素相同
            len++;//平台长度+1
    	else//否则
            len=1;//平台长度重归为1
    	if(len>max)//记录最大平台值
            max=len;
    }
    cout<<max<<endl;
    return 0;
}