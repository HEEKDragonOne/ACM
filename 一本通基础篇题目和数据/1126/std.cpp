#include <iostream>
using namespace std; 
int main() 
{
    int m,n;
    int a[101][101];
    int i,j;
    
    cin>>m>>n;//输入矩阵列数、行数
    
    for(i=1;i<=m;i++)//输入矩阵
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    
    for(i=1;i<=n;i++)//输出转至后的矩阵
    {
        for(j=1;j<=m;j++)
            cout<<a[j][i]<<" ";
		cout<<endl;
    }
    return 0;
}