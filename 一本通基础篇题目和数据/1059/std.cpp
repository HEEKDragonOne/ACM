#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,age[101];
	double avrrage,sum=0;
	int i;

	cin>>n;//人数
	for(i=0;i<n;i++)
	{
		cin>>age[i];//年龄
		sum+=age[i];//年龄和
	}
	avrrage=sum/n;//平均值
	printf("%.2lf\n",avrrage);
    return 0;  
}