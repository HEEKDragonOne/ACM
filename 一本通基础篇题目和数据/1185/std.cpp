#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a[100];
    int k=0;
    bool flag;
    int i;

    while(cin>>a[k])
    {
        flag=false;
        for(i=0;i<k;i++)
        {
            if(a[i].compare(a[k])==0)
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            k++;
    }
    sort(a,a+k);
    for(i=0;i<k;i++)
        cout<<a[i]<<endl;
    return 0;
}