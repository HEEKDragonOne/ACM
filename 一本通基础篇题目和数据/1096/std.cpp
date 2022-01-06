#include<iostream>
using namespace std;
int main()
{
        int left,right,sum=0;
	int i,j;
	
        cin>>left>>right;
	for(i=left;i<=right;i++)
		for(j=i;j>0;j/=10)//分离个位
			if(j%10==2)	sum++;//若个位为1，计数器+1

	cout<<sum<<endl;
	return 0;
}