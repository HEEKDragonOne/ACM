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
#define N 201
#define MOD 100001
#define E 1e-12
using namespace std;
int f(int m,int n)
{
    if(m==0||n==1)
        return 1;
    if(m<n)
        return f(m,m);
    return 
        f(m,n-1)+f(m-n,n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        cout<<f(m,n)<<endl;
    }
    return 0;
}