#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int num,i;
    double e=1;
    long long temp=1;

    cin>>num;
    for(i=1;i<=num;i++)
    {
        temp=temp*i;//计算阶乘
        e=e+1.0/temp;//累加
    }
    printf("%.10lf\n",e);
    
    return 0;
}