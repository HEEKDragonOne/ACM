#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	int age[100];
    double percent[4]={0};
    
    cin>>n;//病人数n
    for(i=0;i<n;i++)	cin>>age[i];//患病年龄
    
    for(i=0;i<n;i++)
    	{
        	if(age[i]<=18)	percent[0]++;//统计年龄在19岁以下的人数
         	if((age[i]>=19)&&(age[i]<=35))	  percent[1]++;//统计年龄在19到35岁的人数
        	if((age[i]>=36)&&(age[i]<=60))	  percent[2]++;//统计年龄在36到60岁的人数
        	if(age[i]>=61)	percent[3]++;//统计年龄在60岁以上的人数
    	}
    
    cout<<setiosflags(ios::fixed)<<setprecision(2);//格式输出控制，保留两位小数
    for(i=0;i<4;i++)//转换成百分数的形式输出
		{
			percent[i]=percent[i]*100.0/n;
			cout<<percent[i]<<"%"<<endl;
		}

    return 0;
}
