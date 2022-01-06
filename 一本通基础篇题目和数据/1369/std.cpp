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
#define N 100001
#define MOD 123
#define E 1e-6
using namespace std;
int a[N];
void quick_sort(int left,int right)
{
    int i=left,j=right;
    int mid=a[(i+j)/2];
    while(i<=j)
    {
        while(a[i]>mid)
            i++;
        while(a[j]<mid)
            j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(left<j)
        quick_sort(left,j);
    if(i<right)
        quick_sort(i,right);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    quick_sort(1,n);

    int ans=0;
    int i,j;
    while(1)
    {
        int t=a[n-1]+a[n];
        ans=ans+t;
        if(n==2)
            break;
        if(a[n-2]>=t)
            a[n-1]=t;
        else
        {
            j=n-2;
            while(j>=1&&a[j]<t)
                j--;
            for(i=n-1;i>j+1;i--)
                a[i]=a[i-1];
            a[i]=t;
        }
        n--;
    }
    cout<<ans<<endl;
    return 0;
}