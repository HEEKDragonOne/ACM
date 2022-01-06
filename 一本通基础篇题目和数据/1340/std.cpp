#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 101
#define MOD 123
#define E 1e-6
using namespace std;
typedef struct Node;
typedef Node *tree;
struct Node{
	char data;
	tree lchild,rchild;
};
tree bt;
int i=-1;
string s;
void build(tree &bt)//建树
{
	if(s[++i]!='.')
	{
		bt=new Node;
		bt=new Node;
		bt->data=s[i];
		build(bt->lchild);
		build(bt->rchild);
	}
	else
        bt=NULL;
}
void inorder(tree bt)//输出中序序列
{
	if(bt)
	{
		inorder(bt->lchild);
		cout<<bt->data;
		inorder(bt->rchild);
	}
}
void postorder(tree bt)//输出后序序列
{
	if(bt)
	{
		postorder(bt->lchild);
		postorder(bt->rchild);
		cout<<bt->data;
	}
}
int main()
{
	cin>>s;
	build(bt);
	inorder(bt);
	cout<<endl;
	postorder(bt);
	cout<<endl;
	return 0;
}