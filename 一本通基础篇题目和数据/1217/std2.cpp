#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
struct Point {
	int x,y;
};
vector<Point>chess;
int n,k,ans;
bool r[15],c[15];
char ch;
void dfs(int layer,int tot) {
	if(tot>=k) {
		ans++;
		return;
	}
	for(int i=layer; i<chess.size(); i++)
		if(!r[chess[i].x]&&!c[chess[i].y]) {
			r[chess[i].x]=true;
			c[chess[i].y]=true;
			dfs(i+1,tot+1);
			r[chess[i].x]=false;
			c[chess[i].y]=false;
		}
	return;
}
int main() {
	while(scanf("%d%d",&n,&k)==2) {
		ans=0;
		memset(r,0,sizeof(r));
		memset(c,0,sizeof(c));
		chess.clear();
		if(n==-1&&k==-1)break;
		for(int i=0; i<n; i++) {
			while((ch=getchar())!='\n');
			for(int j=0; j<n; j++) {
				ch=getchar();
				if(ch=='#')chess.push_back((Point) {
					i,j
				});
			}
		}
		dfs(0,0);
		printf("%d\n",ans);
	}
	return 0;
}
