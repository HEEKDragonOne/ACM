#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int a[32768];
int tot;
int x;
void calculate(int n,int step)
{
    int ans=1;
    for(int i=1;i<=step-1;i++)
        ans*=a[i];
    if(ans>x)
        return;
    if(ans==x)
    {
        tot++;
        return;
    }
    for(int i=a[step-1];i<=x;i++)
        if(n%i==0)
        {
            n/=i;
            a[step]=i;
            calculate(n,step+1);
            n*=i;
        }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        tot=0;
        cin>>x;
        a[0]=2;
        calculate(x,1);
        cout<<tot<<endl;
    }
    return 0;
}