#include <iostream>
using namespace std; 
int main() 
{
    int m,n;
    int a[101][101],b[101][101];
    int i,j;
    
    cin>>m>>n;//输入矩阵列数、行数
    
    for(i=1;i<=m;i++)//输入第一个矩阵
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=m;i++)//输入第二个矩阵
        for(j=1;j<=n;j++)
            cin>>b[i][j];
    
    for(i=1;i<=m;i++)//输出矩阵和
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]+b[i][j]<<" ";
		cout<<endl;
    }
    return 0;
}