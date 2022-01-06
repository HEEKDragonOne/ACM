#include<iostream>
using namespace std; 
int main() 
{
    int n,m;
    int a[101][101];
    int sum=0;
    int i,j;
    
    cin>>n>>m;//输入矩阵行列
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];//读入元素
			if(i==1||i==n||j==1||j==m)//判断是不是边缘
                sum+=a[i][j];//如果时，累加
		}
	}
    
    cout<<sum<<endl;
    return 0;
}