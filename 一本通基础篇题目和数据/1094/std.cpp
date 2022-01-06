#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long int sum=0;
	
    cin>>n;
    
	for(i=1;i<=n;i++)
		if( i%7!=0 && i/10!=7 && i%10!=7)//不能被7整除、个位、十位没有7
			sum+=i*i;//累加平方和
    
	cout<<sum<<endl;
	return 0;
}