#include<iostream>
using namespace std;
int main()
{
	int m,k,a[5],i,num=0;
 	
	cin>>m>>k;
 	/*依次读取各位数字*/
	a[0]=m/10000;
 	a[1]=m%10000/1000;
 	a[2]=m%1000/100;
 	a[3]=m%100/10;
 	a[4]=m%10;
 	
	for(i=0;i<=4;i++)//统计3的个数
 		if(a[i]==3)  
			num++;	 
	 
 	if((num==k)&&(m%19==0))//依照题意判断    
		cout<<"YES"<<endl;
 	else
   		cout<<"NO"<<endl;
 	
	return 0;
}