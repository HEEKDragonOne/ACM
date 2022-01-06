#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
void Hanoi(int n,char a,char c,char b)
{
    if(n==1)
    {
        printf("%c->%d->%c\n",a,n,b);
        return ;
    }
    Hanoi(n-1,a,b,c);
    printf("%c->%d->%c\n",a,n,b);
    Hanoi(n-1,c,a,b);
}
int main()
{
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    Hanoi(n,a,c,b);
    return 0;
}