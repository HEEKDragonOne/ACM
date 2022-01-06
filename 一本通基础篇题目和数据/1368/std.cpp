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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
char s[N];
int main()
{
    cin>>s;
    int len=strlen(s);
    s[len]='#';

    int flag=true;
    for(int i=1;i<len;i+=2)
        if( (s[i]=='#'&&s[i+1]!='#') || (s[i+1]=='#'&&s[i]!='#') )
        {
            flag=false;
            break;
        }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}