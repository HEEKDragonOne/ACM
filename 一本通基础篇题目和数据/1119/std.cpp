#include<iostream>
#include<algorithm>
using namespace std; 
int main() 
{
    int n,m;
    int	a[6][6];
    int i,j;
    
    for(i=1;i<=5;i++)//输入矩阵元素
        for(j=1;j<=5;j++)
            cin>>a[i][j];
    cin>>n>>m;//输入要交换的两行
    
    for(i=1;i<=5;i++)//交换两行元素
    	swap(a[m][i],a[n][i]);
    
    for(i=1;i<=5;i++)//输出矩阵
    {
        for(j=1;j<=5;j++)
    		cout<<a[i][j]<<" ";
    	cout<<endl;
    }
    return 0;
}