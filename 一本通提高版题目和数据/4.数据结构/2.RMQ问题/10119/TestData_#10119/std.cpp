#include <iostream>  
#include <cstdio>  
#include <algorithm>  
  
using namespace std;  
const int N = 1e6 + 5, LogN = 20;   
                                     //��ʾ�������ͳ�����1e6 + 5��Ϊ106+5  
int log[N], f[N][LogN + 5], a[N];  
int n, m, x, y;  
  
int main()  
{  
	freopen("test10.in","r",stdin);
	freopen("test10.out","w",stdout);
    scanf("%d%d", &n, &m);  
    for (int i = 1; i <= n; ++i)  
       scanf("%d", &a[i]);              //����n������  
    log[0] = -1;                        //log[0]��Ϊ-1����������ʹlog[1]Ϊ0  
    for (int i = 1; i <= n; ++i)  
     f[i][0] = a[i], log[i] = log[i >> 1] + 1;  //Ԥ���������Ϊ1~n��logֵ  
    for (int j = 1; j <= LogN; ++j)         //����f[i][j]  
     for (int i = 1; i + (1 << j) - 1 <= n; ++i) //ע������߽粻�ܳ���n  
      f[i][j] = max(f[i][j - 1], f[i + (1 << j - 1)][j - 1]);  
                                     //2j���������������"<<"�ܿ����  
                                     //ע��Ӽ��˳�����������ȼ�����λ�������   
    while (m--)  
    {  
        scanf("%d%d", &x, &y);  
        int s = log[y - x + 1];            //��log2(y-x-1)��ȡ����ֵ  
        printf("%d\n", max(f[x][s], f[y - (1 << s) + 1][s]));    //�ش�ÿ������  
    }  
    return 0;  
}  
