#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct people{
    int num;
    int time;
}arr[5000];
bool cmp(people a,people b)
{
    return a.time<b.time;
}
int main()
{
    int n;
    int i;
    double time_sum=0,time_average;
    cin>>n;
    for(i=1;i<=n;i++)	
    {
        cin>>arr[i].time;
        arr[i].num=i;
    }
    sort(arr+1,arr+1+n,cmp);
    
    for(i=1;i<=n;i++)	
    {
        cout<<arr[i].num<<" ";
    	if(n-i>=1)	time_sum+=arr[i].time*(n-i);
    }    
    time_average=time_sum/n;
    
    cout<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<time_average<<endl;
        
    return 0;
}