#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 20001
using namespace std;
int a[N];
void qsort(int x,int y)
{
    int i=x,j=y,mid=a[(x+y)/2];
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
    if(x<j)
        qsort(x,j);
    if(i<y)
        qsort(i,y);
}
int main()
{
    int n,b;
    int sum=0;
    int i;

    cin>>n>>b;
    for(i=1;i<=n;i++)
        cin>>a[i];
    qsort(1,n);
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>=b)
            break;
    }
    cout<<i<<endl;;
    return 0;
}