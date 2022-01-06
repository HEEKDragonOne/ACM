#include<cstdio>
#include<cstdlib>
#include<cstring>
 
void f(int n)
{
	if(n==1)
	{
		printf("2(0)");
		return;
	}
	if(n==2)
	{
		printf("2");
		return;
	}
	int p=1;
	int s=0;
	while(p<=n)
	{
		p=p*2;
		s++;
	}
	s=s-1;
	if(n==p/2)
	{
		printf("2(");
		f(s);
		printf(")");	
	}
	else
	{
		if(p/2==2)
		{
			printf("2");
			printf("+");
			f(n-p/2);
		}
		else
		{
			printf("2(");
			f(s);
			printf(")+");
			f(n-p/2);
		}
	}
}
 
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
}
