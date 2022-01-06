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
int main()
{
    string a[N];
    int n=0;
    while(cin>>a[++n]);
    sort(a+1,a+1+n);

    int sum=a[1].length();
    for(int i=2;i<=n;i++)//依次计算每个单词对前一单词的差
    {
        int j=0;
        while(a[i][j]==a[i-1][j]&&j<a[i-1].length())//求两个单词相同部分的长度
            j++;
        sum+=a[i].length()-j;//累加两个单词的差
    }
    cout<<sum+1<<endl;

    return 0;
}