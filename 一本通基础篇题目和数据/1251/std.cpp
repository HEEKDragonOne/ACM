#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int N = 1005;
const int dx[] = {-1, 0, 1, 0},
		  dy[] = { 0, 1, 0,-1};
int m,n,que[N*N][3],x1,y1,x2,y2;
bool g[N][N];
 
void bfs(){
	int head=0,tail=1;
	que[1][1]=x1; que[1][2]=y1; que[1][0]=0;
	g[x1][y1] = false;
	while (head<tail){
		head++;
		for (int i=0; i<4; i++){
			int x=que[head][1]+dx[i],y=que[head][2]+dy[i];
			if (x>=0 && x<m && y>=0 && y<n && g[x][y]){
				tail++;
				que[tail][1]=x; que[tail][2]=y; que[tail][0]=que[head][0]+1;
				g[x][y] = false;
				if (x==x2 && y==y2){
					cout<<que[head][0]+1<<endl;
					return;
				}
			}
		}
	}
	cout<<-1<<endl;
}
 
int main(){
	while (cin>>m>>n){
		if (!m && !n) break;
		memset(g,false,sizeof(g));
		memset(que,0,sizeof(que));
		string s;
		for (int i=0; i<m; i++){
			cin>>s;
			for (int j=0; j<n; j++)
				if (s[j]=='@') g[i][j]=true,x1=i,y1=j;
				else if (s[j]=='.') g[i][j]=true;
				else if (s[j]=='#') g[i][j]=false;
				else if (s[j]=='*') g[i][j]=true,x2=i,y2=j;
		}
		bfs();
	}
	return 0;
}
