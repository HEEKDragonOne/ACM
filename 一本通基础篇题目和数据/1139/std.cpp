#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char str[25];
	int len;
	int i,j;

	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		if(str[0]>='a'&&str[0]<='z')//以小写开头，转为大写
			str[0]-=32;
		len=strlen(str);
		for(j=1;j<len;j++)//除开头外均转为小写字母
			if(str[j]>='A'&&str[j]<='Z')
				str[j]+=32;
		puts(str);
	}
	return 0;
}