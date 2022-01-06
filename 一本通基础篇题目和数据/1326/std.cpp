#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1001
#define MOD 1000000007
using namespace std;
int b,p,k;
int calculate(int p)
{
    int temp;

    if(p==0)
        return 1;
    temp=calculate(p/2)%k;
    temp=(temp*temp)%k;
    if(p%2==1)
        temp=(temp*b)%k;
    return temp;
}
int main()
{
    cin>>b>>p>>k;
    int temp=b;
    b%=k;
    cout<<temp<<"^"<<p<<" mod "<<k<<"="<<calculate(p)<<endl;
    return 0;
}