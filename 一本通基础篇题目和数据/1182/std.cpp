#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    double d;
    char s[20];
    double a[50],b[50];
    int p=0,q=0;
    double temp;
    int i,j;
    
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>d;
        if(strcmp(s,"male")==0)
            a[p++]=d;
        else 
            b[q++]=d;
    }
    
    for(i=0;i<p;i++)
        for(j=i+1;j<p;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
    for(i=0;i<q;i++)
        for(j=i+1;j<q;j++)
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
            
    for(i=0;i<p;i++)
        printf("%.2lf ",a[i]);
    for(i=0;i<q;i++)
        printf("%.2lf ",b[i]);
    return 0;
}
