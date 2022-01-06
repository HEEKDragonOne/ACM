#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int a[N];
int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0;
        int max=-INF;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
            sum+=a[i];
        }
        if(max>=sum-max)
            printf("%.1lf\n",(sum-max)*1.0);
        else
            printf("%.1lf\n",sum*1.0/2);
    }
    return 0;
}