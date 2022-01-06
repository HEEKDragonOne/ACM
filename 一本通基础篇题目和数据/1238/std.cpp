#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 50001
#define MOD 1000000007
#define E 1e-5
using namespace std;
double a,b,c,d;
double calculate(double x)
{
    double ans=0;
    double y=1;

    for(int i=1;i<=3;i++)
        y*=x;
    y*=a;
    ans+=y;

    y=1;
    for(int i=1;i<=2;i++)
        y*=x;
    y*=b;
    ans+=y;

    y=1;
    y*=x;
    y*=c;
    ans+=y;

    ans+=d;
    return ans;
}
int main()
{
    double x=-100,x1,x2,x3;

    cin>>a>>b>>c>>d;
    while(x-100<=E)
    {
        if(fabs(calculate(x))<=E)
            break;
        x+=0.01;
    }
    x1=x;

    x+=0.01;
    while(x-100<=E)
    {
        if(fabs(calculate(x))<=E)
            break;
        x+=0.01;
    }
    x2=x;

    x+=0.01;
    while(x-100<=E)
    {
        if(fabs(calculate(x))<E)
            break;
        x+=0.01;
    }
    x3=x;
    printf("%.2lf %.2lf %.2lf\n",x1,x2,x3);
    return 0;
}