#include <iostream>
using namespace std; 
int main() 
{
    int m,a[10001];
    int max=0,min=99999;
    int difference;
    int i;
    
    cin>>m;//输入整数个数m
    for(i=1;i<=m;i++)
    {
        cin>>a[i];//输入m个整数
        if(a[i]>max)	max=a[i];//记录最大值
        if(a[i]<min)	min=a[i];//记录最小值
    }
    difference=max-min;//计算最大值与最小值的差
    cout<<difference<<endl;
    return 0;
}