#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int num,i;
    double sum=1,temp=1,x;
	
    cin>>x>>num;
    for(i=1;i<=num;i++)
    {
        temp=temp*x;//计算x^i
        sum=sum+temp;//累加x^i
    }
    printf("%.2f\n",sum);
    
    return 0;
}