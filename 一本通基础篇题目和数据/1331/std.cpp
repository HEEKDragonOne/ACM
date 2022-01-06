#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char str[256];
int stack[256];
int main()
{
 
    int top=0;
 
    fgets(str,200,stdin);
    int len=strlen(str);
 
    for(int i=0;i<=len-3;i++)
    {
        switch(str[i])
        {
            case '+':stack[--top]+=stack[top+1];break;//加法
            case '-':stack[--top]-=stack[top+1];break;//减法
            case '*':stack[--top]*=stack[top+1];break;//乘法
            case '/':stack[--top]/=stack[top+1];break;//除法
            default://非空格时计算数字
                    {
                        int x=0;
                        while(str[i]!=' ')
                            x=x*10+str[i++]-'0';
                        stack[++top]=x;
                        break;
                    }
        }
    }
    cout<<stack[top]<<endl;
    return 0;
}
