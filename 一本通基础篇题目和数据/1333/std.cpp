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
#define N 1000001
#define MOD 123
#define E 1e-6
using namespace std;
int q[N];
int main()
{
    int a,n;
    int x,y;
    while(cin>>a>>n)
    {
        int head1=1,head2=1,tail=1;
        q[tail]=a;
        tail++;

        while(tail<=n)
        {
            int x=q[head1]*2+1;
            int y=q[head2]*3+1;
            if(x<y)
            {
                q[tail]=x;
                tail++;
                head1++;
            }
            else if(x>y)
            {
                q[tail]=y;
                tail++;
                head2++;
            }
            else
            {
                q[tail]=x;
                tail++;
                head1++;
                head2++;
            }
        }
        cout<<q[tail-1]<<endl;
    }
    return 0;
}