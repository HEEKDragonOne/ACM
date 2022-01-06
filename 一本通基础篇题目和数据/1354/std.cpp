#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char str[10000];
int stack[1000];//用1代表(，2代表)，3代表[，4代表]
int main()
{
    int top=-1;
    cin>>str;
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')//记录左圆括号
            top++,stack[top]=1;
        else if(str[i]==')')//记录右圆括号
        {
            if(top==-1)
                top++,stack[top]=2;
            else if(stack[top]==1)
                top--;
            else
                top++,stack[top]=2;
        }
        else if(str[i]=='[')//记录左方括号
            top++,stack[top]=3;
        else if(str[i]==']')//记录右方括号
        {
            if(top==-1)
                top++,stack[top]=4;
            else if(stack[top]==3)
                top--;
            else
                top++,stack[top]=4;
        }
    }
    if(top==-1)
        printf("OK");
    else
        printf("Wrong");
    return 0;
}