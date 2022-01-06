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
#define N 101
#define MOD 123
#define E 1e-6
using namespace std;
#define fish first
#define lake second
priority_queue <pair<int, int> > heap;//pair表示先按照第一个元素降序排序，第一个元素相等时按照第二个元素降序排序
int t[N],f[N],d[N];
int main()
{
    int n,T;
    cin>>n;
	for(int i=1;i<=n;i++)//第1分钟各个鱼塘能钓到的鱼的数量
        cin>>f[i];
	for(int i=1;i<=n;i++)//每过1分钟各个鱼塘钓鱼数的减少量
        cin>>d[i];
	for(int i=1;i<n;i++)//当前鱼塘到下一个相邻鱼塘需要的时间
        cin>>t[i];
	cin>>T;//截止时间

	int maxx=-INF;
	int walk_time=0;
	for(int k=1;k<=n;k++)//枚举最远走到的池塘的编号
	{
	    int rest_time=T-walk_time; //计算剩余时间
	    int ans=0;

	    for(int i=1;i<=k ;i++)//收集能够钓鱼的池塘的资料
            heap.push(make_pair(f[i],i));
	    while(rest_time>0&&heap.top().fish>0)
	    {
	        pair<int,int> a=heap.top();
	        heap.pop();
	        ans+=a.fish;//贪心选取鱼最多的池塘
	        a.fish-=d[a.lake];//修改鱼的数量
	        heap.push(a);//堆维护
	        rest_time--;//剩余时间变少
	    }
		if(ans>maxx)//刷新最优解
            maxx=ans;
		walk_time+=t[k]; //累计走路需要的时间
	}
	cout<<maxx<<endl;
	return 0;
}