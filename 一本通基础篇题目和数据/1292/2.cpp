#include <iostream>
#include <cmath>
#include <queue>
#include <string.h>
using namespace std;
int N,M,K;
int dp[1010][510];
int num[110];
int hurt[110];
int main()
{
	cin>>N>>M>>K;
	for(int i=0;i<K;++i)
	{
		cin>>num[i]>>hurt[i];
	}
	memset(dp,0,sizeof(dp));
	int maxn=0;int minh=M+3;
	for(int i=0;i<K;++i)
	{
		for(int j=N;j>=num[i];--j)
		{
			for(int t=M-1;t>=hurt[i];--t)
			{
				if(dp[j-num[i]][t-hurt[i]]>0&&j>num[i]&&t>hurt[i])
				{
					dp[j][t]=max(dp[j][t],dp[j-num[i]][t-hurt[i]]+1);
					//cout<<i<<' '<<j<<' '<<t<<' '<<dp[j][t]<<endl;
				}
				else if(j==num[i]&&t==hurt[i])
				{
					dp[num[i]][hurt[i]]=max(dp[num[i]][hurt[i]],1);
				}
				if(dp[j][t]>maxn)
				{
					maxn=dp[j][t];minh=t;
				}
				else if(dp[j][t]==maxn)
				{
					minh=min(minh,t);//cout<<j<<' '<<t<<' '<<maxn<<' '<<minh<<endl;
				}
			}
		}
	}
	cout<<maxn<<' ';
	if(minh<M+3)cout<<M-minh;
	else cout<<M;
	return 0;
}
