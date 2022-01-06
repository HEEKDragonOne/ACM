#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int n;
int a[N],b[N];
void qsort(int x,int y)
{
    int i,j,mid1,mid2;
    i=x;
    j=y;
    mid1=b[(x+y)/2];
    mid2=a[(x+y)/2];
    while(i<=j)
    {
        while( b[i]<mid1 || (b[i]==mid1&&a[i]<mid2) )
            i++;
        while( b[j]>mid1 || (b[j]==mid1&&a[j]>mid2) )
            j--;
        if(i<=j)
        {
            swap(a[j],a[i]);
            swap(b[j],b[i]);
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
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i]>>b[i];
    qsort(1,n);

    int cnt=0;
    int temp=-INF;
    for(int i=1;i<=n;i++)
        if(a[i]>temp)
        {
            cnt++;
            temp=b[i];
        }
    cout<<cnt<<endl;
    return 0;
}