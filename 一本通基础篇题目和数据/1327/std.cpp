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
int n,st,sp;
char a[N];
void print()
{
    printf("step%2d:",st++);
    for(int i=1;i<=2*n+2;i++)
        printf("%c",a[i]);
    printf("\n");
}
void move(int m)
{
    a[sp]=a[m];
    a[sp+1]=a[m+1];
    a[m]=a[m+1]='-';
    sp=m;
    print();
}
void mv(int m)
{
    if(m==4)
    {
        move(4);
        move(8);
        move(2);
        move(7);
        move(1);
    }
    else
    {
        move(m);
        move(2*m-1);
        mv(m-1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        a[i]='o';
    for(int i=n+1;i<=2*n;i++)
        a[i]='*';
    for(int i=2*n+1;i<=2*n+2;i++)
        a[i]='-';
    st=0;
    sp=2*n+1;
    print();
    mv(n);
    return 0;
}