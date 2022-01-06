#include<bits/stdc++.h>
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int flag=1;
    for(int i=0;s[i];i++)
    {
        if(s[i]==s[i+1])
        {
            flag++;
        }
        else
        {
            cout<<flag<<s[i];
            flag=1;
        }
    }
 
    return 0;
}
