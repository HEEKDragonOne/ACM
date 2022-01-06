#include<iostream>
using namespace std; 
int main() 
{
    int n,x;
    int a[10001]={0};
    int max=-9999,flag;
    int i;
    
    /*桶排的思想*/
    
    cin>>n;//输入数组大小n
    for(i=1;i<=n;i++)
    {
        cin>>x;//输入元素
    	a[x]++;
        if(x>max)
            max=x;//记录最大值
    }
    for(i=0;i<=max;i++)//输出到max为止的频数
    	cout<<a[i]<<endl;
    
    return 0;
}