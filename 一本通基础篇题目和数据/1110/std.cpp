#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,x;
    int a[10001]; 
    int i;
    int flag=0;
    
	cin>>n;//输入序列元素个数n
    for(i=1;i<=n;i++)//输入每个元素
        cin>>a[i];
    cin>>x;//输入查找特定值
    
    for(i=1;i<=n;i++)//对每个数依次比较
    {
        if(a[i]==x)//若查找到了
        {
			flag=1;//记录标志，说明数列中存在x
            cout<<i<<endl;//输出下标位置
            break;//终止循环
        }
    }
    if(flag==0)//如果记录标志为0，说明数列中不存在x
        cout<<-1<<endl;//输出-1
    
    return 0;
}