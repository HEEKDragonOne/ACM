#include<iostream>
#include<cstring>
using namespace std;
int a[20][20];
int f(int m,int n)
{
    int i,j;
    for(i=1;i<=n;i++)//0个苹果
        a[0][i]=1;
    for(i=1;i<=m;i++)//1个盘子
        a[i][1]=1;
    for(i=1;i<=m;i++)
        for(j=2;j<=n;j++)
            if(i<j)
                a[i][j]=a[i][i];
            else 
                a[i][j]=a[i][j-1]+a[i-j][j]; 
}
int main()
{
    int m,n,i,j,k;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        cin>>m>>n;
        f(m,n);
        cout<<a[m][n]<<endl;
    }
    return 0;
}  