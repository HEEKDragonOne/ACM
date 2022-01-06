#include<iostream>
using namespace std;
int main()
{
	int n;
    int a[1001],b[1001];
    int result=0;
    int i;
    
    cin>>n;//输入整数n
    
    for(i=1;i<=n;i++)//输入向量ai
       cin>>a[i];
    for(i=1;i<=n;i++)//输入向量bi
       cin>>b[i];
	for(i=1;i<=n;i++)//计算向量点积
       result+=a[i]*b[i];

    cout<<result<<endl;
    return 0;
}