#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

struct student{
	string name;
	int score;
}a[100];

int main()
{
	int n;
	int i,j;

	cin>>n;//输入学生数
	for(i=0;i<n;i++)
	{
		cin>>a[i].score;//输入分数
		cin>>a[i].name;//输入姓名
	}

	for(i=0;i<n-1;i++)//冒泡排序
		for(j=0;j<n-1-i;j++)
			if(a[j].score<a[j+1].score)
				swap(a[j],a[j+1]);

	cout<<a[0].name<<endl;
	return 0;
}