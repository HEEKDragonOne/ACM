#include<iostream>
using namespace std;
struct node{
    int id;
    double score;
}stu[110],temp;
int main()
{
    int n,k;
    int i,j;

    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>stu[i].id>>stu[i].score;

    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            if(stu[i].score<stu[j].score)
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }

    cout<<stu[k].id<<" "<<stu[k].score;
    return 0;
}