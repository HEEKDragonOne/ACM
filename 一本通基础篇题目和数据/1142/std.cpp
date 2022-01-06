
#include<iostream>
#include<string>
#include<iostream>
#include<string>
//#include<bits/stdc++.h>
#include<cctype>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
//char s[1005];
int main()
{
   string s;
   s.clear();
   string s1[1000];
   int n=0;
   while(cin>>s)
   {
       s1[n++]=s;
   }
   for(int i=0;i<n;i++)
   {
       if(i)
        cout<<",";
       cout<<s1[i].size();
   }
   cout<<endl;
 
 
	return 0;
}
