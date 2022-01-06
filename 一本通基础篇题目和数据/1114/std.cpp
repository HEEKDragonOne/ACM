#include<iostream>
#include<cstdio>
using namespace std; 
int main() 
{
    double n;
    int flag_max,flag_min;
	int i;    
	double max=-99999,min=99999;
    double a[3001],b[3001],sum=0;
    double average,ave_max=-99999;
    
    
    cin>>n;//输入样本数量n
    
    for(i=1;i<=n;i++)
    {
        cin>>a[i];//输入样本值
        if(a[i]>max)	
        {
            max=a[i];//记录最大值
            flag_max=i;//记录最大值位置
        }
        if(a[i]<min)
        {	
            min=a[i];//记录最小值
            flag_min=i;//记录最小值位置
        }
    	sum+=a[i];//计算n个样本白细胞数量之和
    }
    average=1.0*(sum-max-min)/(n-2);//计算平均白细胞数量
    
    for(i=1;i<=n;i++)
    {
        if(i!=flag_max&&i!=flag_min)//不计算已舍去的两个样本
        {
            b[i]=a[i]-average;//记录每个样本与平均数之差的绝对值
            if(b[i]<0)
                b[i]=-b[i];
        }
        else
            b[i]=-99999;//否则赋值最小，使其不可能为最大值
    }
    for(i=1;i<=n;i++)//找最大的差值
        if(b[i]>ave_max)
            ave_max=b[i];

    printf("%.2lf %.2lf\n",average,ave_max);
    return 0;
}