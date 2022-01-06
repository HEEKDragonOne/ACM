#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
    int a[5001]; 
    int i,j;
    int flag=1;
    
    cin>>n>>m;
    
    memset(a,0,sizeof(a));//初始化将灯关上
    for(i=1;i<=m;i++)//m个人依次进行操作
        for(j=1;j<=n;j++)//对n盏灯进行操作
            if(j%i==0)//只对人编号的倍数进行操作
                a[j]=!a[j];//对灯进行相反处理
    
    for(i=1;i<=n;i++)//输出灯是关闭的序号
    {
        if(a[i])
        {
            if(flag)	flag=0;//仅第一次不用先输出逗号
        		else	cout<<",";
        	cout<<i;
        }
    }
    cout<<endl;
    
    return 0;
}