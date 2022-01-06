#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 501
#define MOD 123
#define E 1e-6
using namespace std;
int main()
{
    long long start,endd;
    long long x1,y1,x2,y2;
    double dis=0;

    cin>>start>>endd;
    while(scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2)!=EOF)
        dis+=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    double ans=dis*2/1000/20;
    long long h=(long long)(ans);
    long long m=(long long)((ans-h)*60+0.5);

    printf("%lld:%02lld\n",h,m);
    return 0;
}