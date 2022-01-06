#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define N 20
using namespace std;
int main()
{
    int t;
    char str[260];
    int i,j;

    cin>>str;
    cin>>t;
    int len=strlen(str);
    while(t--)
    {
        for(i=0;i<=len-2;i++)
            if(str[i]>str[i+1])
            {
                for(j=i;j<=len-2;j++)
                    str[j]=str[j+1];
                break;
            }
        len--;
    }
    i=0;
    while(i<=len-1&&str[i]=='0')
        i++;
    if(i==len)
        cout<<"0"<<endl;
    else
        for(j=i;j<=len-1;j++)
            cout<<str[j];
    return 0;
}