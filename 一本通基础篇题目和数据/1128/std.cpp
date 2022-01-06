#include<iostream>
#include<cmath>
using namespace std;
int a[1001][1001];
double b[1001][1001];
int main() 
{
    int m,n;

    int i,j;
    
    cin>>n>>m;//输入图像行数、列数
    
    for(i=1;i<=n;i++)//输入每个像素点灰度
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n||j==1||j==m)//边界灰度不变
                b[i][j]=a[i][j];
            else//内部按要求求平均
            	b[i][j]=round((a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5.0);//按要求用round()四舍五入
        }
    }
    
     for(i=1;i<=n;i++)//输出模糊后的图像
    {
        for(j=1;j<=m;j++)
            cout<<b[i][j]<<" ";
		cout<<endl;
    }
    return 0;
}