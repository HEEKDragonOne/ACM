#include<cstdio>
#include<iostream>
#define N 1010
using namespace std;
int stack[N],a[N];
int main()
{
    int n;
    int i;

    cin>>n;
    for(i=1;i<=n;i++)//a[i]为到达B站的车厢
        cin>>a[i];

    int top=0;
    int cur=1;//cur为需要进栈的车厢
    for(i=1;i<=n;i++)//进栈,到达A站；出栈,到达B站
    {
        while(cur<=a[i])//比a[i]小的车厢都要在栈中
            stack[++top]=cur++;
        if(stack[top]==a[i])//将a[i]弹出栈 
            top--;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}