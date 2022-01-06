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
#define N 1000001
#define MOD 123
#define E 1e-6
using namespace std;
int D,I;
int b[N];
int ans;
void down(int k)
{
    if( pow(2,(D-1))<=k && k<pow(2,D) )
    {
        ans=k;
        return;
    }
    if(b[k])
    {
        b[k]=!b[k];
        down(2*k+1);
    }
    else
    {
        b[k]=!b[k];
        down(2*k);
    }
}
int main()
{
    int i,a;

    cin>>D>>I;
    for(i=1;i<=I;i++)
        down(1);
    cout<<ans<<endl;
    return 0;
}