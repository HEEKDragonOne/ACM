#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>
#define INF 999999999
#define N 1000001
#define MOD 1000000007
#define E 1e-5
using namespace std;
int a[N];
void quicksort(int left,int right)
{
    int i=left,j=right,mid=a[(left+right)/2];
    while(i<=j)
    {
        while(a[i]<mid)
            i++;
        while(a[j]>mid)
        j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(i<right)
        quicksort(i,right);
    if(left<j)
        quicksort(left,j);
}
int main()
{
    int n;
    int cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    quicksort(1,n);
    while(cnt<=n)
    {
        int s=a[cnt],k=cnt;
        while(s==a[cnt])
            cnt++;
        cout<<a[cnt-1]<<" "<<cnt-k<<endl;
    }
    return 0;
}