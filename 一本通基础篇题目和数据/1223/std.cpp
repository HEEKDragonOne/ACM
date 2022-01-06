#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        int cnt=0;
        int temp=n;
        while(temp>0)
        {
            if(temp%2)
                cnt++;
            temp/=2;
        }
        int sum=0;
        while(1)
        {
            temp=++n;
            while(temp>0)
            {
                if(temp%2)
                    sum++;
                temp/=2;
            }
            if(cnt==sum)
            {
                cout<<n<<endl;
                break;
            }
            sum=0;
        }
    }
    return 0;
}