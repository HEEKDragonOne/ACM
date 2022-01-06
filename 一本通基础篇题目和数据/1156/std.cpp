#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double calculate(double x);

int main()
{
    double a,pi;
    a=1/sqrt(3);//计算公式的参数
    pi=6*(calculate(a));//调用函数计算
    printf("%.10lf\n",pi);//保留十位小数输出
    return 0;
}
double calculate(double x)
{
    double sum=0,temp=x;
    int i=1;

    while(fabs(temp/i)>=1e-6)//最后一项绝对值大于10^(-6)时进行循环
    {
        sum+=temp/i;//累加各项
        temp=-1*x*x*temp;//求下一项
        i+=2;//系数+2
    }
    return sum;
}