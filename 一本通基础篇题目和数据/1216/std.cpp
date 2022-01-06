#include<iostream>
using namespace std;
//1215：迷宫 
//可以想象成一边走一边染色，.代表白色，#代表黑色，只要从起始点A一路能够染色到达终点B即可。 
#include<iostream>
using namespace std;
int zu,n,i,j,w,h,si,sj;//si，sj为出发点行列坐标 
char a[21][21];
int b[21][21];
int x[4]={-1,0,1,0},y[4]={0,1,0,-1};
int sum=0,maxn=0;

void input()
{
	for(i=1;i<=h;i++)
		for(j=1;j<=w;j++)
			{	
				cin>>a[i][j];
				if(a[i][j]=='@')
				{
					si=i;
					sj=j;
				}
			}
			 
	return;
}

void dfs(int ha,int la)//从坐标为ha,la的点出发，染色 
{
	a[ha][la]='#';//走过的点变为'#'，相当于染色 
	sum++;
	if(maxn<sum)
		maxn=sum;
	int t;
	for(t=0;t<4;t++)//向上、右、下、左四个方向走 
		if(ha+x[t]>=1&&ha+x[t]<=h&&la+y[t]>=1&&la+y[t]<=w&&a[ha+x[t]][la+y[t]]=='.')
			{
				dfs(ha+x[t],la+y[t]);
				//a[ha+x[t]][la+y[t]]='.';//这句不能加 
			}
	return;
}
int main()
{
	cin>>w>>h;//输入第一组迷宫的列值、行值 
	while(w!=0&&h!=0)
	{
		input();
		sum=0;maxn=0;
		dfs(si,sj);//从A点出发 
		cout<<maxn<<endl;
		cin>>w>>h;
	}
    return 0;
}
