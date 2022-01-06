#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct node{
    char id[20];
    int age;
    int seq;
}a[110],b[110],temp;
int main()
{
    int n,d;
    char s[20];
    int p=0,q=0,k=0;
    int i,j;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s>>d;
        k++;
        if(d>=60)
        {
            strcpy(a[p].id,s);
            a[p].age=d;
            a[p].seq=k;
            p++;
        }
        else
        {
            strcpy(b[q].id,s);
            b[q].age=d;
            b[q].seq=k;
            q++;
        }
    }

    for(i=0;i<p;i++)
        for(j=i+1;j<p;j++)
            if(a[i].age<a[j].age)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else if(a[i].age==a[j].age&&a[i].seq>a[j].seq)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    for(i=0;i<q;i++)
        for(j=i+1;j<q;j++)
            if(b[i].seq>b[j].seq)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

    for(i=0;i<p;i++)
        cout<<a[i].id<<endl;
    for(i=0;i<q;i++)
        cout<<b[i].id<<endl;

    return 0;
}