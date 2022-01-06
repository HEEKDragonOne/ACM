#include<iostream>
#include <cstring>

using namespace std;
int main()
{
	char s1[501],s2[501];
	int len;
	double x,sum=0;
	int i;
	
	cin>>x>>s1>>s2;
	len=strlen(s1);//计算字符串长度
	for(i=1;i<=len;i++)//从头到尾枚举串1与串2是否相同
		if(s1[i]==s2[i])
			sum++;//统计相同个数

	if(sum/len>=x)//所占比例大于所给阀值
		cout<<"yes"<<endl;//相关
	else//否则
		cout<<"no"<<endl;//不相关

	return 0;
}
