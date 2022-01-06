#include<bits/stdc++.h>
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1="",s2="";
    int maxn=-1;
    int minn=105;
    string t="";
    int flag=1;
    string::size_type i=s.size();
    s[i]=' ';
    for(int i=0;s[i];i++)
    {
        if(s[i]!=' '&&s[i]!=',')
        {
            flag++;
            t.push_back(s[i]);
        }
        else
        {
            if(maxn<flag)
            {
                maxn=flag;
                s1=t;
            }
            if(t.size()==0)
                continue;
            if(minn>flag)
            {
                minn=flag;
                s2=t;
            }
            t="";
            flag=1;
 
        }
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
