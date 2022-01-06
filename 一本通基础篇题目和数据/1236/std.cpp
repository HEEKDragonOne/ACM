#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 50001
#define MOD 1000000007
using namespace std;
struct node{
    int left,right;
}a[N];
int cmp(struct node a,struct node b)
{
    return a.left<b.left||a.left==b.left&&a.right<b.right;
}
int main()
{
    int n;
    int i;
    int max=-INF;

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].left>>a[i].right;
    sort(a+1,a+1+n,cmp);

    for(i=1;i<n;i++)
    {
        if(a[i].right>max)
            max=a[i].right;
        if(a[i+1].left>max)
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    if(a[i].right>max)
        max=a[i].right;
    cout<<a[1].left<<" "<<max;
    return 0;
}