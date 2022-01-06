#include <iostream>
using namespace std; 
int main() 
{
   int plan,month,overplus=0,flag=1,total=0;
   int i,m;
    
   for(i=0;i<12;i++)//总共12个月
   {
      cin>>plan;
      overplus=overplus+300-plan;//剩余的钱数
      
      if(overplus<0&&flag)//剩余钱数小于零且此前无超出预算的情况
      {
          month=i+1;
          flag=0;
      }
      m=overplus/100;//存入的钱的系数
      overplus=overplus-m*100;//剩余的钱数
      total=total+m*100;//存入的钱
   }

   if(flag==0)	cout<<-1*month<<endl;//flag=0，说明有超出预算的月份
   else   cout<<overplus+(total*6)/5<<endl;//输出总钱数
 
   return 0; 
}