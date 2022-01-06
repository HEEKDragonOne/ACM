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
#define E 1e-5
using namespace std;
int a[N];
int main()
{
    int n,m;
    int x;
    int left,right,mid;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    while(m--)
    {
        cin>>x;
        left=1;
        right=n;

        while(left<right-1)
        {
            mid=(left+right)/2;
            if(a[mid]>x)
                right=mid;
            else
                left=mid;
        }
        if(fabs(a[left]-x)<=fabs(a[right]-x))
            cout<<a[left]<<endl;
        else
            cout<<a[right]<<endl;
    }
    return 0;
}