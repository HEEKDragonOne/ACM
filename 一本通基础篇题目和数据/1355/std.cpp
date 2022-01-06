#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[]={'{','[','(','<','}',']',')','>'};//{→0 [→1 (→2 <→3 }→4 ]→5 )→6 >→7
char str[300];
int b[300],stack[300];
int main()
{
    int n;
    int k;

    cin>>n;//输入测试数据组数
    while(n--)
    {
        int top=0;
        bool flag=true;//用于判断嵌套是否合法的标记

        cin>>str;
        int len=strlen(str);
        for(int i=0;i<len;i++)
            for(int j=0;j<8;j++)
                if(str[i]==a[j])
                {
                    b[i]=j;////建立映射
                    break;//跳出内循环
                }

        for(int i=0;i<len;i++)//判断是否匹配
        {
            if(b[i]<=3)//b[i]元素入栈
            {
                if(top==0||b[i]>=stack[top])//b[i]元素可以入栈
                {
                    top++;
                    stack[top]=b[i];
                }
                else//元素无法入栈，说明该组数据非法
                {
                    flag=false;
                    break;
                }
            }
            else if(b[i]>=4)//判断是否配对
            {
                if(top>0&&stack[top]+4==b[i])//可以配对
                    top--;
                else//无法配对
                {
                    flag=false;
                    break;
                }
            }
        }
        if(top)
            cout<<"NO"<<endl;//栈内有元素，匹配不成功
        else if(flag==1)
            cout<<"YES"<<endl;//栈内无元素，匹配成功
        else
            cout<<"NO"<<endl;//栈内无元素，匹配不成功
    }
    return 0;
}