#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1="";
    for(int i=0;s[i];i++)
    {
        if(s[i]!=' ')
        {
            s1.push_back(s[i]);
        }
        else
        {
            reverse(s1.begin(),s1.end());
            cout<<s1<<" ";
            s1.clear();
        }
    }
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}
