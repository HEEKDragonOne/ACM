#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    int y;
    node(){}
    node(int x1,int y1):x(x1),y(y1){}
 
};
int n,m;
int u[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
 
int head=1;
int tail=1;
int s[105][105];
int sum=0;
void bfs(int x,int y)
{
    queue<node>Q;
    s[x][y]=0;
    Q.push(node(x,y));
    while(!Q.empty()){
        node a=Q.front();
        Q.pop();
        for(int i=0;i<4;i++){
            int xx=u[i][0]+a.x;
            int yy=u[i][1]+a.y;
            if(xx>=0&&xx<n&&yy>=0&&yy<m&&(s[xx][yy])){
                s[xx][yy]=0;
                Q.push(node(xx,yy));
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]){
                sum++;
                bfs(i,j);
            }
        }
    }
    cout<<sum<<endl;
 
    return 0;
}
