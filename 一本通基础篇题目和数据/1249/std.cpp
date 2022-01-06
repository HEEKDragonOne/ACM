#include<cstdio>
int n,m;
char a[120][120];
int dir[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,1},{1,1},{1,-1},{-1,-1}};
struct node
{
    int x;
    int y;
}q[100000];
void bfs(int x0,int y0)
{
    int head=1,tail=1;

    a[x0][y0]='.';
    q[tail].x=x0;
    q[tail].y=y0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        for(int i=0;i<8;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&a[nx][ny]=='W')
            {
                a[nx][ny]='.';
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
            }
        }
        head++;
    }
}
int main()
{
    int sum=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]=='W')
            {
                sum++;
                bfs(i,j);
            }
    printf("%d\n",sum);
    return 0;
}