#include<iostream>
using namespace std;
int main()
{
    int num,i;
    long int sum=0,temp=1;

    cin>>num;
    for(i=1;i<=num;i++)
    {
        temp=temp*i;//计算阶乘
        sum=sum+temp;//累加
    }
    cout<<sum<<endl;
  
    return 0;
}