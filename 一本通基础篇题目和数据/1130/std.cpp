#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char ch[100001];
int main()
{
    int letters[26]={0};
    int len;
    int sum=0;
    int i;
    scanf("%s",ch);
    len=strlen(ch);//求字符串长度

    
    for(i=0;i<len;i++)//桶排的思想统计26个小写字母出现频次
        letters[ch[i]-'a']++;
    
    for(i=0;i<len;i++)//对字符串进行遍历
	{
		if(letters[ch[i]-'a']==1)//如果出现过一次
		{
			cout<<ch[i]<<endl;//输出字母
			return 0;//结束
		}
	}
	cout<<"no"<<endl;
    return 0;
}
