#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char str[10000];
int main()
{
    int top=0;

    gets(str);
    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')//记录左括号
            top++;
        else if(str[i]==')')//记录右括号
        {
            if(top>0)//栈不为空时
                top--;
            else
                top++;
        }
    }
    if(top==0)//栈为空说明匹配
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}