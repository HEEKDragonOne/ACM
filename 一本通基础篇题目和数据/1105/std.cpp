#include<iostream>
using namespace std;
int main()
{
    int n;
    int num[101];
    int i;
    
    cin>>n;//元素个数n
    for(i=1;i<=n;i++)
            cin>>num[i];//n个整数
    
    for(i=n;i>=1;i--)//倒序输出
    	cout<<num[i]<<" ";
    
    cout<<endl;
    return 0;
}