#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int a[20],b[20];
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    int cnt=0;
    int numerator=0,denominator=1;
    int divisor;
    char s[20];

    cin>>n;
    while(n--)
    {
        scanf("%d/%d",&a[cnt],&b[cnt]);
        cnt++;
    }
    for(int i=0;i<cnt;i++)
        denominator*=b[i];
    for(int i=0;i<cnt;i++)
        numerator=numerator+denominator*a[i]/b[i];

    divisor=gcd(denominator,numerator);
    denominator/=divisor;
    numerator/=divisor;

    if(denominator==1)
        cout<<numerator<<endl;
    else
        cout<<numerator<<"/"<<denominator<<endl;
    return 0;
}