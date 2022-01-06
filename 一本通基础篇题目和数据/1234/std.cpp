#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 500
#define MOD 1000000007
using namespace std;
char a[N];
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        cin>>a;
        int len=strlen(a);
        int B=0,C=2011;
        int i;

        for(i=len-4;i<len;i++)
            if(i>=0)
                B=B*10+a[i]-'0';
        i=1;
        do{
            if(i*2<=B)
            {
                i*=2;
                C=(C*C)%10000;
            }
        }while(i*2<=B);
        for(;i<B;i++)
            C=(C*2011)%10000;
        cout<<C<<endl;
    }
    return 0;
}