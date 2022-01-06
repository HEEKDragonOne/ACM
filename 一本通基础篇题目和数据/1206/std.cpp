#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int calculate(int m,int n)
{
    if(m==0||n==1)
        return 1;
    if(m<n)
        return calculate(m,m);
    return calculate(m,n-1)+calculate(m-n,n);
}
int main()
{
    int k;
    int m,n;
    cin>>k;
    while(k--)
    {
        cin>>m>>n;
        cout<<calculate(m,n)<<endl;
    }
    return 0;
}