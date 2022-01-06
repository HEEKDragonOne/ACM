#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int n;
int beginn[N],endd[N];
void qsort(int x,int y)
{
    int i,j,mid;
    i=x;
    j=y;
    mid=endd[(x+y)/2];
    while(i<=j)
    {
        while(endd[i]<mid)
            i++;
        while(endd[j]>mid)
            j--;
        if(i<=j)
        {
            swap(endd[j],endd[i]);
            swap(beginn[j],beginn[i]);
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
        cin>>beginn[i]>>endd[i];
    qsort(1,n);

    int cnt=0;
    int temp=-INF;
    for(int i=1;i<=n;i++)
        if(beginn[i]>=temp)
        {
            cnt++;
            temp=endd[i];
        }
    cout<<cnt<<endl;
    return 0;
}