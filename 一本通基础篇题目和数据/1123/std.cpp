#include<iostream>
#include<cstdio>
using namespace std;
int main() 
{
    int m,n;
    int a[101][101],b[101][101];
    int sum=0;
    int i,j;
    double semblance;
    
    cin>>m>>n;//输入图像列数、行数
    
    for(i=1;i<=m;i++)//输入第一个图像
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            cin>>b[i][j];//输入第二个图像
            if(a[i][j]==b[i][j])//与第一个图像比较，若像素点颜色相同，计数器+1
                sum++;
        }
    
    semblance=sum*1.0/(n*m)*100;//相似度计算
    printf("%.2lf\n",semblance);
    
    return 0;
}