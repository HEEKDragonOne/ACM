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
    long long n,m,i,j;
    int tot=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    sort(a+1,a+1+n);
    i=1;j=n;
    while(i<=j)
    {
        if(a[i]+a[j]==m)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            exit(0);
        }
        else if(a[i]+a[j]<m)
            i++;
        else
            j--;
    }
    cout<<"No"<<endl;
    return 0;
}