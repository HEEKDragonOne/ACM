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
#define E 1e-12
using namespace std;
int main()
{
    double l,n,c;
    cin>>l>>n>>c;
    double left=0,right=acos(-1.0),mid;
    double l2=(1+n*c)*l;
    while(right-left>E)
    {
        mid=(left+right)/2.0;
        if(2*l2/l>mid/sin(mid/2.0))
            left=mid;
        else
            right=mid;
    }
    printf("%.3lf\n",l2/mid*(1-cos(mid/2)));
    return 0;
}