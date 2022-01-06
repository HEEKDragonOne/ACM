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
struct node{
    int d;
    int left;
    int right;
}q[N];
int n,a;
int ans;
void inorder(int k)
{
    if(q[k].left)
        inorder(q[k].left);
    ans++;
    if(q[k].d==a)
    {
        cout<<ans<<endl;
        exit(0);
    }
    if(q[k].right)
        inorder(q[k].right);
}
int main()
{
    cin>>n>>a;
    for(int i=1;i<=n;i++)
        cin>>q[i].d>>q[i].left>>q[i].right;
    inorder(1);
    return 0;
}