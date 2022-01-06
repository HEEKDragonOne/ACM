#include<cstdio>  
long long d[110]= {0};  
int main()
{  
    d[1]=1;
    d[2]=2;
    d[3]=4;  
    for(int i=4; i<=100; i++)
        d[i]=d[i-1]+d[i-2]+d[i-3];  
    int a;  
    while(scanf("%d",&a)==1&&a)   
        printf("%lld\n",d[a]);  
    return 0;  
}  