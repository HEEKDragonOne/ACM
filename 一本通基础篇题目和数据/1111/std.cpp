#include <iostream>
using namespace std; 
int main() 
{
    int school,extra;
    int time[8];
    int day,max=0;
    int i;
       
    for(i=1;i<=7;i++)
    {
        cin>>school>>extra;//输入在校时间与额外上课时间
		time[i]=school+extra;//记录每天上课时间
    }
    
    for(i=1;i<=7;i++)
    {
        if(time[i]>max)
        {
            max=time[i];//找出最长上课时间
        	day=i;//记录当天是周几
        }
    }
    if(max>8)	cout<<day<<endl;//如果这周最长上课时间大于8小时，输出最不高兴的时间
    else	cout<<0<<endl;//如果没有，输出0
    return 0;
}