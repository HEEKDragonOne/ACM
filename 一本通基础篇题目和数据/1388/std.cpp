#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
map <string,string> father;
string Find(string x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
int main()
{
    string str;
    string temp1,temp2,temp3;
    while(cin>>str&&str!="$")
    {
        if(str[0]=='#')
        {
            temp1=str.substr(1,str.size()-1);
            if(father[temp1]=="")
                father[temp1]=temp1;
        }
        else if(str[0]=='+')
        {
            temp2=str.substr(1,str.size()-1);
            Find(temp1);
            father[temp2]=father[temp1];
        }
        else if(str[0]=='?')
        {
            temp3=str.substr(1,str.size()-1);
            Find(temp3);
            cout<<temp3<<" "<<father[temp3]<<endl;
        }
    }
    return 0;
}