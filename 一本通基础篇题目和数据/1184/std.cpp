#include<iostream>  
using namespace std;  
int main()  
{  
    int n;  
    int num[1001]={0},k;  
    int result=0;  
    int i;  
      
    cin>>n;  
      
    for(i=1;i<=n;i++) //桶排序  
    {  
        cin>>k;  
        if(num[k]==0)   result++;//去重  
        num[k]++;  
    }  
     
    cout<<result<<endl;  
    for(i=1;i<=1000;i++)  
        if(num[i]) cout<<i<<" ";//桶号即随机数  
    cout<<endl;  
    return 0;  
} 