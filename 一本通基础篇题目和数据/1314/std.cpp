#include<iostream>
#include<cstdio>    //用scanf()，printf()输入输出加快速度
#include<cstring>    //cstring内有memset()函数
using namespace std;
int a[9]={0,-1,-1,-2,-2,1,1,2,2};    //数组a[]存储马控制的横坐标范围
int b[9]={0,2,-2,1,-1,2,-2,1,-1};    //数组b[]存储马控制的纵坐标范围，注意相同下标的a,b之间有一定的对应关系，即除了(0,0)外|a|与|b|一个为1，另一个为2
int n,m,x,y,i,j;
int map[21][21];    //map[i][j]表示地图上(i,j)这个点是否是马的控制点
long long tripnum[21][21];    //tripnum[i][j]表示从(0,0)到(i,j)卒合法的行走路线总数
int main()
{
	memset(tripnum,0,sizeof(tripnum));
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<=20;i++)
		for(j=0;j<=20;j++)
			map[i][j]=1;    //map[i][j]为1时表示(i,j)非控制点
	for(i=0;i<=8;i++)
		if(x+a[i]<=20 && x+a[i]>=0 && y+b[i]<=20 && y+b[i]>=0)    //如果控制点在地图范围内，即这个点存在
			map[x+a[i]][y+b[i]]=0;    //将其设为0，表示这里被马控制
	for(j=0;j<=20;j++)    //从左到右遍历最上面一行的所有点
		if(map[0][j]==1)    //如果这个点不是控制点
			tripnum[0][j]=1;    //那么从(0,0)到达这个点的路线自然只有一条
		else    //否则这点不可到达，路线数为初值0条
			break;    //并且其右的点也不可达，不必继续遍历
	for(i=0;i<=20;i++)    //从上到下遍历最左边一列的所有点
		if(map[i][0]==1)    //如果这个点不是控制点
			tripnum[i][0]=1;    //那么从(0,0)到达这个点的路线自然只有一条
		else    //否则这点不可到达，路线数为初值0条
			break;    //并且其下的点也不可达，不必继续遍历
	for(i=1;i<=n;i++)    //从(1,1)这个点开始，逐行的去看(也可以逐列)
		for(j=1;j<=m;j++)
			if(map[i][j]==1)    //如果这个点不是控制点
				tripnum[i][j]=tripnum[i-1][j]*map[i-1][j]+tripnum[i][j-1]*map[i][j-1];    //那么到达它的路线数等于其左的点路线与其上的点之和，由于其左与其上的点有可能是控制点，所以要乘以控制系数map[i][j](这也是为什么用0代表控制，而用1代表非控制，而不是调换过来的原因)
	printf("%lld",tripnum[n][m]);
return 0;
}
