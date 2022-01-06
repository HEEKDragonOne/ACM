#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int calculate(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return calculate(n-1)+calculate(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        cout<<calculate(n)<<endl;
    return 0;
}