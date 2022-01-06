#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 3000
using namespace std;
int n,r;
int a[N];
void print(int step)
{
    cout<<n<<"=";
    for(int i=1;i<=step-1;i++)
        cout<<a[i]<<"+";
    cout<<a[step]<<endl;
}
void dfs(int sum,int step)
{
    for(int i=a[step-1];i<=sum;i++)
    {
        if(i<n)
        {
            a[step]=i;
            sum-=i;
            if(sum==0)
                print(step);
            else
                dfs(sum,step+1);
            sum+=i;
        }
    }
}
int main()
{
    cin>>n;
    a[0]=1;
    dfs(n,1);
    return 0;
}