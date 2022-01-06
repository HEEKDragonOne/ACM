#include<iostream> 
using namespace std;
int a[30][30];
int main()
{
    int m,n;
    int i,j;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        a[i][1]=1;
    for(j=1;j<=n;j++)
        a[1][j]=1;
    for(i=2;i<=m;i++)
        for(j=2;j<=n;j++)
            a[i][j]=a[i-1][j]+a[i][j-1];
    cout<<a[m][n]<<endl;
    return 0;
}