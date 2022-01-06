#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int sx[8]={1,1,-1,-1,2,2,-2,-2};
int sy[8]={2,-2,2,-2,1,-1,1,-1};
int t,n,m,x,y,ans;
bool b[20][20];
void dfs(int dep,int s,int t){
	if (dep==n*m){
		ans++; return;
	}
	for (int r=0;r<8;++r){
		int x=s+sx[r]; int y=t+sy[r];
		if (!b[x][y]&&x>0&&y>0&&x<=n&&y<=m){
			b[x][y]=true;
			dfs(dep+1,x,y);
			b[x][y]=false;
		}
	}
}
int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d%d",&n,&m);
		scanf("%d%d",&x,&y); ++x; ++y;
		memset(b,0,sizeof(b)); ans=0,b[x][y]=true; 
		dfs(1,x,y);
		printf("%d\n",ans);
	}
}
