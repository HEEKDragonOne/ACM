#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    int math,english,grade;
    int result[500][2]={0},chinese[500]={0};

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>chinese[i]>>math>>english;
        grade=chinese[i]+math+english;
        result[i][0]=i;
        result[i][1]=grade;
    }

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(result[j][1]<result[j+1][1])//按总分排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
            else if( result[j][1]==result[j+1][1] && chinese[j]<chinese[j+1])//按语文成绩排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
            else if( result[j][1]==result[j+1][1] && chinese[j]==chinese[j+1] && result[j][0]>result[j+1][0] )//按学号排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
        }
    }

    for(i=1;i<=5;i++)
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    return 0;
}