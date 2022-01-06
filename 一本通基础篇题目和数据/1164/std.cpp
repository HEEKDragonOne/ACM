#include<iostream>
#include<algorithm>
 
using namespace std;
int flag=0;
void f(int n,int k)
{
    flag++;
    if(flag==k)
    {
        cout<<n%10<<endl;
        return ;
    }
    else
        f(n/10,k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    f(n,k);
    return 0;
}
