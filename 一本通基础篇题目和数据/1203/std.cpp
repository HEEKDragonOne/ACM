#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int main()
{
    char a[101],b[101];
    int stack[101];
    int top=0;
    while(cin>>a)
    {
        int len=strlen(a);
        for(int i=0;i<len;i++)
        {
            if(a[i]=='(')
            {
                top++;
                stack[top]=i;
                b[i]=' ';
            }
            else if(a[i]==')')
            {
                if(top!=0)
                {
                    top--;
                    b[i]=' ';
                }
                else
                    b[i]='?';
            }
            else
                b[i]=' ';
        }
        while(top)
        {
            b[stack[top]]='$';
            top--;
        }
        b[len]='\0';
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}