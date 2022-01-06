#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        int n;
	int i,j;
	int sum=0;

	cin>>n;
	for(i=2;;i++)
	{
		for(j=2;j<=sqrt(i)&&i%j!=0;j++);//判断i是否为素数
		if(j>sqrt(i))//若是素数
		{
			sum++;//累加sum，该数是第sum小的
			if(sum==n)
			{
				cout<<i<<endl;
				break;
			}
		}
	}

        return 0;
}