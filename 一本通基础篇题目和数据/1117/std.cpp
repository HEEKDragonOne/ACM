#include<iostream>
using namespace std; 	
int main()
{
    int n;
    int a[20001];
	bool b[20001];
	int i,j;

    cin>>n;//输入数组大小n
	for(i=1;i<=n;i++)
	{
		cin>>a[i];//输入元素
		b[i]=true;//初始化为没有重复
	}

    for(i=1;i<=n;i++)
		if(b[i])//判断a[i]是否被标记为重复
			for(j=i+1;j<=n;j++)//寻找a[i]后是否有重复的数
				if(a[i]==a[j])//如果有重复的数
					b[j]=false;//标记为不能输出

    for(i=1;i<=n;i++)//输出没有重复的数
        if(b[i]==true)
            cout<<a[i]<<" ";
    cout<<endl;
    
    return 0;
}