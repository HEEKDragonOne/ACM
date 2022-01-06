#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int a[N],b[N];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        a[i]=i;
    for(int i=1;i<=n;i++)
        b[i]=i;

    int k,k1=1;
    int r1=m,r2=n;
    int f1=1,f2=1;

    cin>>k;
    while(k1<=k)
    {
        cout<<a[f1]<<" "<<b[f2]<<endl;

        r1++;
        r2++;

        a[r1]=a[f1];
        b[r2]=b[f2];

        f1++;
        f2++;

        k1++;
    }
    return 0;
}