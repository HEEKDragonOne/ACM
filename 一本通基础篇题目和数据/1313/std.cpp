#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int f[1001][2];//f[i][0]表示前i位取偶数个3的情况，f[i][1]表示前i位取奇数个3的情况
    int n,x;
    int i;
    
    /*边界条件*/
    f[1][1]=1;
    f[1][0]=9;
    
    cin>>n;
    for(i=2;i<=n;i++)
    {
        x=f[1][0];
        if(i==n)
            x--;
        f[i][0]=(f[i-1][0]*x+f[i-1][1])%12345;
        f[i][1]=(f[i-1][1]*x+f[i-1][0])%12345; 
    }
    cout<<f[n][0]<<endl;
    return 0; 
}