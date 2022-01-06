#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int a[2000];
    int n;
    int flag;
    int max=0;  //max用于记录出现次数最多的数字次数 
    int t=1;   //t用于计数 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
     } 
    sort(a,a+n);   //进行排序 
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])   //计算相同的数字次数 
        {
            t++;
        }
        else
        {
            if(max<t)    //找出数字重复次数最多的数字 
            {
                flag=a[i];
                max=t;
            }
            t=1;
        }
     } 
     if(max>(n/2))   //判断重复次数最多的数字次数是否超过总数一半 
     {
        cout<<flag;
     }
     else
     {
        cout<<"no";
     }

    return 0;
}
