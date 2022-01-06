#include<iostream>
using namespace std; 
int main() 
{
    int n,x,y;
    int	a[10001],b[10001],g[10001],k[10001];
    int i;
    
    cin>>n;//输入地毯数n
	for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];//输入地毯左下角坐标(a,b)
        cin>>g[i]>>k[i];//输入地毯在x轴、y轴的长度
    }
    cin>>x>>y;//输入所求的地面的点的坐标(x,y)
    
    for(i=n;i>=1;i--)//找覆盖在最上的地毯，所以上到下找
    {
        if((x>=a[i]&&x<=a[i]+g[i]) && (y>=b[i]&&y<=b[i]+k[i]))//判断是否在范围内
        {
            cout<<i<<endl;//找到后输出
            return 0;//结束
        }
    }
    cout<<-1<<endl;//没有覆盖，输出-1
    return 0;
}