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
string str1,str2;
void calculate(int left1,int right1,int left2,int right2)
{
	int m=str2.find(str1[left1]);
	if(m>left2)
        calculate(left1+1,left1+m-left2,left2,m-1);
	if(m<right2)
        calculate(left1+m-left2+1,right1,m+1,right2);
	cout<<str1[left1];
}
int main()
{
	cin>>str1>>str2;
	calculate(0,str1.length()-1,0,str2.length()-1);
	cout<<endl;
	return 0;
}