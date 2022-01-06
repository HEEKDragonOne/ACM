#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 101
using namespace std;
int main()
{
    int m,n;
    int temp;
    int flag;
    while(scanf("%d%d",&m,&n)!=EOF&&m&&n)
    {
        flag=1;
        if(m<n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        while(m/n==1)
        {
            temp=m;
            m=n;
            n=temp%n;
            flag=-flag;
        }
        if(flag==1)
            cout<<"win"<<endl;
        else
            cout<<"lose"<<endl;
    }
    return 0;
}