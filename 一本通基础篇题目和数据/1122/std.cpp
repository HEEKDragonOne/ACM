#include <iostream>
using namespace std; 
int main() 
{
    int a[5][5];
    int i,j;
    int max,point,flag=1,work=1;
    
   for(i=0;i<5;i++)//数据输入
        for(j=0; j<5; j++)
             cin>>a[i][j];
    
    for(i=0;i<5;i++) 
    {
        max=a[i][0];//每循环一行初始化最大值
        point=0;
        
        for(j=1;j<5;j++) 
        {
            if(max<a[i][j])//寻找最大值
            {             
                max=a[i][j];             
                point=j;//记录所在列
            }
        }
        flag=1;
        for(j=0;j<5;j++) 
        {
            if(a[j][point]<max)//进行比较确定是否是所在列最小值
             flag=0;
        }
        
        if(flag)//如果满足行最大，列最小，按要求输出，结束程序
        {
            cout<<i+1<<" "<<point+1<<" "<<max<<endl;
            return 0;
        }
    }
    cout<<"not found"<<endl;//如果未满足，输出not found
    return 0;
}