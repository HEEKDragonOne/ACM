#include<iostream>
using namespace std;
int main()
{
    int apple[10],high,total=0;
    int i;
    
    for(i=0;i<10;i++)	cin>>apple[i];//输入苹果高度
    cin>>high;//输入伸直手的高度
    
    high+=30;//踩上板凳后的高度
    for(i=0;i<10;i++)//对每个苹果进行比较
            if(apple[i]<=high)//如果苹果高度<能够到的高度
                	total++;//说明可以够到苹果，计数器+1

    cout<<total<<endl;
    
    return 0;
}