#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1000001
#define MOD 1000000007
#define E 1e-7
using namespace std;
double calculate(double x)
{
    return x*x*x*x*x-15*x*x*x*x+85*x*x*x-225*x*x+274*x-121;
}
double myabs(double x){
    if(x<0)return -x;
    return x;
}
int main()
{
    double left=1.5,right=2.4;
    while(left+E<right)
    {
        double mid=(left+right)/2.0;
        if(calculate(mid)>0)
            left=mid;
        else right=mid;
    }
    if(calculate(left)==0)
        printf("%.6lf\n",left);
    else
        printf("%.6lf\n",left);
    return 0;
}