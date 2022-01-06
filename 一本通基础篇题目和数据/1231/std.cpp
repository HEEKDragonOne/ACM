#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 101
using namespace std;
char str[N];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>str>>n;
        int len=strlen(str);
        while(n--)
        {
            for(int i=0;i<len-1;i++)
                if(str[i]>str[i+1])
                {
                    for(int j=i;j<len-1;j++)
                        str[j]=str[j+1];
                    break;
                }
            len--;
        }
        str[len]='\0';
        cout<<str<<endl;
    }
    return 0;
}