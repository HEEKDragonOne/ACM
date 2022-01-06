#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 101
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    int g[4]={0,5,3,1};
    int x,y;

    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(a+b+c+d+e+f==0)
            break;
        int n=f+e+d+(c+3)/4;
        x=5*d+g[c%4];
        if(b>x)
            n+=(b-x+8)/9;
        y=36*n-36*f-25*e-16*d-9*c-4*b;
        if(a>y)
            n+=(a-y+35)/36;
        cout<<n<<endl;
    }
    return 0;
}