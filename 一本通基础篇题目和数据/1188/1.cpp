/*-----------------
* author: Rainboy
* email: rainboylvx@qq.com
* time: 2019年 05月 20日 星期一 14:58:07 CST
*----------------*/
#include <bits/stdc++.h>
using namespace std;


int a[1000005];

int main(){
    a[1] = 1;
    a[2] = 1;

    int i,j,k;
    for (i=3;i<=1000000;i++){
        a[i] = (a[i-1]+a[i-2]) % 1000;
    }
    scanf("%d",&j);
    for (i=1;i<=j;i++){
        scanf("%d",&k);
        printf("%d\n",a[k]);
    }
    return 0;
}
