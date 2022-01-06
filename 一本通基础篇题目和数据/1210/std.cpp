#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 10001
using namespace std;
int n;
int a[N],b[N];
void calculate(int x,int y)
{
    if(x==0||y>x)
        return;
    while(x%y==0)
    {
        x/=y;
        a[y]++;
    }
    calculate(x,y+1);
}
int main()
{
    bool flag=false;

    cin>>n;
    calculate(n,2);

    for(int i=2;i<=n;i++)
    {
        if(flag&&a[i])
            cout<<"*";
        if(a[i])
            flag=true;
        if(a[i]==1)
            cout<<i;
        else if(a[i]>1)
            cout<<i<<"^"<<a[i];
    }
    cout<<endl;
    return 0;
}