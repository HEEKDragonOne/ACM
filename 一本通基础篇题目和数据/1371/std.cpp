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
#define N 100001
#define MOD 123
#define E 1e-6
using namespace std;
struct Node{
    char name[20];
    int grade;
}a,heap[N],temp;
int len=0;
void build(Node hp)
{
    len++;
    int t=len;
    while( t>1 && heap[t/2].grade<hp.grade)
    {
        heap[t]=heap[t/2];
        t/=2;
    }
    heap[t]=hp;
}
void trun(int x)
{
    int left=2*x,right=2*x+1;
    int k=x;

    if(left<=len)
        if(heap[k].grade<=heap[left].grade)
            k=left;

    if(right<=len)
        if(heap[k].grade<=heap[right].grade)
            k=right;

    if(x!=k)
    {
        temp=heap[k];
        heap[k]=heap[x];
        heap[x]=temp;
        trun(k);
    }
}
void Delete()
{
    heap[1]=heap[len];
    len--;
    trun(1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char operate[10];
        cin>>operate;

        if(strcmp(operate,"push")==0)
        {
            cin>>a.name>>a.grade;
            build(a);
        }

        if(strcmp(operate,"pop")==0)
        {
            if(len==0)
                cout<<"none"<<endl;
            else
            {
                cout<<heap[1].name<<" "<<heap[1].grade<<endl;
                Delete();
            }
        }
    }
    return 0;
}