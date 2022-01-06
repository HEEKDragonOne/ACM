#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[1100];
int main()
{
    int a[30]={0};
    int len,max=-1;
    int i,j;

    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++)
        a[str[i]-'a']++;

    for(i=0;i<26;i++)
        if(a[i]>max)
        {
            j=i;
            max=a[i];
        }

    cout<<char('a'+j)<<" "<<max<<endl;
    return 0;
}