#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
#define k 32767
using namespace std;
int a[N];
int f(int x)
{
	if(a[x]!=0) return a[x];
	if(x==1) return 1;
	if(x==2) return 2;
	return a[x]=(2*(f(x-1))%k+(f(x-2))%k)%k;
}
int main()
{
    int n,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;	
		cout<<f(a)<<endl;
	}
	return 0;
}