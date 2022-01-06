#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double price[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};//给定每种书的价格
    int num[10];
    double sum=0;
    int i;
    
    for(i=0;i<10;i++)
    {
        cin>>num[i];//输入要买的每本书的数量
        sum+=num[i]*price[i];//累加每种书的价格
    }
    printf("%.1f\n",sum);//保留1位小数输出
    
    return 0;
}