#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int k;
int judge(int x)
{
    if(x==k)
        return 1;
    if((x-1)%3==0&&(x-1)%2==0)
        return (judge((x-1)/3)||judge((x-1)/2));
    if((x-1)%3==0)
        return judge((x-1)/3);
    if((x-1)%2==0)
        return judge((x-1)/2);
    return 0;
}
int main()
{
    int x;
    scanf("%d,%d",&k,&x);
    if(judge(x))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}