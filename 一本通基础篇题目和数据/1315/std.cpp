#include<iostream>
using namespace std;
long long calculate(long long n,long long k)
{
    if(n<k||k==0)
        return 0;
    if(n==k||k==1)
        return 1;
    return calculate(n-1,k-1)+k*calculate(n-1,k);
}
int main()
{
    long long n,k;
    cin>>n>>k;
    cout<<calculate(n,k)<<endl;
    return 0;
} 