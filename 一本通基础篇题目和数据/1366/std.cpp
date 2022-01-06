#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 100001
#define MOD 123
#define E 1e-6
using namespace std;
char a[N],b[N],c[N];
int calculate(int left1,int right1,int left2,int right2)
{
    if(left1==right1)
    {
        c[left1]=1;
        return c[left1];
    }
    int i;
    for(i=left2;i<=right2;i++)
        if(a[left1]==b[i])
            break;
    if(left2<i)
        c[left1]+=calculate(left1+1,(i-1-left2)+(left1+1),left2,i-1);
    if(i<right2)
        c[left1]+=calculate(right1-(right2-(i+1)),right1,i+1,right2);
    return c[left1];
}
int main()
{
    cin>>a>>b;
    int lena=strlen(a);
    int lenb=strlen(b);
    calculate(0,lena-1,0,lenb-1);
    for(int i=0;i<lena;i++)
    {
        for(int j=1;j<=c[i];j++)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}