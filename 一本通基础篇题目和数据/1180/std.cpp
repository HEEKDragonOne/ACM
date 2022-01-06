#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    int number[10000],score[10000];
    int i,j;
    int interview_score,interview_people=0;

    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>number[i]>>score[i];

    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(score[j]<score[j+1])//按面试分数排序
            {
                swap(score[j],score[j+1]);
                swap(number[j],number[j+1]);
            }
            if(score[j]==score[j+1])//成绩相同按报名号排序
            {
                if(number[j]>number[j+1])
                {
                        swap(score[j],score[j+1]);
                        swap(number[j],number[j+1]);
                }
            }
        }
    }

    m=double(m*1.5);//据计划录取人数的150%划定选手
    interview_score=score[m-1];

    for(i=0;i<n;i++)
        if(score[i]>=interview_score)    interview_people++;
        else    break;

    cout<<interview_score<<" "<<interview_people<<endl;
    for(i=0;i<interview_people;i++)
        cout<<number[i]<<" "<<score[i]<<endl;

    return 0;
}
