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
#define E 1e-3
using namespace std;
int a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    cout<<a[1];
    for(int i=2;i<=n;i++)
        if(a[i]!=a[i-1])
            cout<<" "<<a[i];
    cout<<endl;
    return 0;
}