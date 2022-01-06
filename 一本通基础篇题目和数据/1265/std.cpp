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
#define MOD 2520
#define E 1e-12
using namespace std;
char a[N],b[N];
int f[N][N];
int main()
{
    scanf("%s%s",&a[1],&b[1]);
    int len_a=strlen(&a[1]);
    int len_b=strlen(&b[1]);
    
    for(int i=0;i<=len_a;i++)
        f[i][0]=0;
    for(int i=0;i<=len_b;i++)
        f[0][i]=0;
    for(int i=1;i<=len_a;i++)
        for(int j=1;j<=len_b;j++)
            if(a[i]==b[j])
                f[i][j]=f[i-1][j-1]+1;
            else 
                f[i][j]=max(f[i-1][j],f[i][j-1]);
    
    cout<<f[len_a][len_b]<<endl;
    return 0;
} 