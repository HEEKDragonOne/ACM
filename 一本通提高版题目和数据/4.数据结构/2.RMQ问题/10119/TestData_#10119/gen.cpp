#include <cstdio>  
#include <algorithm> 
#include <vector>  
#include <ctime>  
#include <cstdlib>  
using namespace std;
int n=10,m=10;
int Rand()
{
	int x=rand();
	return x*rand()+rand();
}
int main()
{
	freopen("test7.in","w",stdout);
	srand(time(0));
	printf("%d %d\n",n,m);
	for (int i=1; i<=n; ++i) printf("%d ",rand());
	printf("\n");
	for (int i=1; i<=m; ++i) {
		int l=Rand()%n+1,r=Rand()%n+1;
		if (l>r) swap(l,r);
		printf("%d %d\n",l,r);
	}
}
