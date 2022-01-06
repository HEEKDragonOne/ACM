#include<iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
struct node{
    char name[30];
    int score;
}stu[30],temp;
int main()
{
    int n;
    int i,j;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>stu[i].name>>stu[i].score;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            if(stu[i].score<stu[j].score)
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
            else if(stu[i].score==stu[j].score&&strcmp(stu[i].name,stu[j].name)>0)
            {
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
    for(i=1;i<=n;i++)
        cout<<stu[i].name<<" "<<stu[i].score<<endl;
    return 0;
}