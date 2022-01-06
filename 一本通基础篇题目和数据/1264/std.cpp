#include<iostream>
using namespace std;

int cmp(int x,int y)
{
    if(x>y)	return x;
    else return y;
}
int dp_rise[10000],dp_fall[10000];
int main()
{
    int n,high[10000];
    int rise_temp,fall_temp,temp;
    int max=1;//留下人数
    int i,j;
    
    cin>>n;//人数
    for(i=1;i<=n;i++)	
    {
        cin>>high[i];
        dp_rise[i]=1;
        dp_fall[i]=1;
    }
    
    for(i=1;i<=n;i++)
    {
        rise_temp=0;
        for(j=1;j<i;j++)
        {
            if(high[i]>high[j])
            {
                if(rise_temp<dp_rise[j])
                    rise_temp=dp_rise[j];
            }
        }
        dp_rise[i]=rise_temp+1;
    }
    
    
    for(i=n;i>=1;i--)
    {
        fall_temp=0;
        for(j=n;j>i;j--)
        {
            if(high[i]>high[j])
            {
                if(fall_temp<dp_fall[j])
                    fall_temp=dp_fall[j];
            }
        }
        dp_fall[i]=fall_temp+1;
    }
    
    for(i=1;i<=n;i++)
    {
        temp=dp_rise[i]+dp_fall[i]-1;
        max=cmp(max,temp);
    }
    
    
    cout<<n-max<<endl;
   
    return 0;
}