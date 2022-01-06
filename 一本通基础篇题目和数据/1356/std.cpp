#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int a[2000];//数据栈
char s[2000],b[2000],c[300];//s字符串，b运算符栈 ,运算符优先级设置
int n=0,i=0,m=0;
void calculate()
{
    switch(b[m-1])//自左往右计算
    {
        case '+':a[n-1]+=a[n];break;
        case '-':a[n-1]-=a[n];break;
        case '*':a[n-1]*=a[n];break;
        case '/':a[n-1]/=a[n];break;
        case '^':a[n-1]=pow(a[n-1],a[n]);break;
    }

    /*出栈*/
    b[m-1]=b[m];
    m--;
    n--;
}
int judge()
{
    if(c[b[m-1]]==4||c[b[m]]==4)//判断是否有'(' 左括号
        return 0;
    if(c[b[m-1]]>=c[b[m]])//判断运算符优先级
        return 1;
    return 0;
}
int getint()
{
    int sum=0;
    if(s[i+1]=='(')//遇到'('的处理
    {
        b[++m]=s[++i];//将'('存入运算符栈
        return getint();//递归调用
    }
    while('0'<=s[++i]&&s[i]<='9')
        sum=sum*10+s[i]-'0';
    return sum;
}
int main()
{
    /*设置运算符优先级*/
    c['+']=c['-']=1;
    c['*']=c['/']=2;
    c['^']=3;
    c['(']=c[')']=4;

    scanf("%s",s+1);//从s[1]开始存储字符串
    a[++n]=getint();//获取整数
    while(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'||s[i]==')')
    {
        b[++m]=s[i];
        if(s[i]==')')//处理右括号
        {
            while(b[m-1]!='(')
                  calculate();
            m-=2;
            i++;//读取')'
            continue;
        }
        while(m>1&&judge())
            calculate();
        a[++n]=getint();
    }
    m++;//空算一次
    while(m>1)
        calculate();
    cout<<a[1]<<endl;
    return 0;
}