#include<iostream>
using namespace std;
int main()
{
	int L,M,i,j;
    int section[10001]={0};
    int a,b,tree_sum=0,tree_ex,tree_new;
    
    cin>>L>>M;//输入马路长度与区域数目
    
    for (i=0;i<M;i++)
    {
        	cin>>a>>b;//输入起始点与终止点
  	        for(j=a;j<=b;j++)//令范围内的树移走
				section[j]=1;
    }

    for(i=0;i<=L;i++)//统计马路长度内被移走的树的数目
		if(section[i]==1)           
            tree_sum++;

	tree_ex=L+1;//原来的树的数目
    tree_new=tree_ex-tree_sum;//移走后的树的数目
    
    cout<<tree_new<<endl;
        
   return 0;
}