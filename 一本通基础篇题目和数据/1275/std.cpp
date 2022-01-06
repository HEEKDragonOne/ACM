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
#define N 30
#define MOD 2520
#define E 1e-12
using namespace std;
char a[N];
int f[N][N];
int cut(int left,int right)
{
    int ans=0;
    for(int i=left;i<=right;i++)
    {
        ans*=10;
        ans+=a[i]-'0';
    }
    return ans;
}
int main()
{
    int n,k;

    cin>>n>>k;
    scanf("%s",&a[1]);

    for(int i=1;i<=n;i++)
        f[i][0]=cut(1,i);

    for(int l=2;l<=n;l++)
        for(int i=1;i<=min(l-1,k);i++)
            for(int j=i;j<l;j++)
                f[l][i]=max(f[l][i],f[j][i-1]*cut(j+1,l));

    cout<<f[n][k]<<endl;
    return 0;
}