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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int len;
char a[N],b[N];
void preorder(int left,int right)
{
    int i,j;
    bool flag=false;
    for(i=0;i<len;i++)
    {
        for(j=left;j<=right;j++)
            if(b[i]==a[j])
            {
                 cout<<a[j];
                 flag=1;
                 break;
            }
        if(flag)
            break;
    }
    if(left<j)
        preorder(left,j-1);
    if(j<right)
        preorder(j+1,right);
}
int main()
{
    cin>>a>>b;
    len=strlen(a);
    preorder(0,len-1);
    return 0;
}