# include<iostream>  
# include<cstdio>  
# include<string>  
using namespace std;  
int n;  
string str[30];  
int len_str,sum=0;  
int times[30]={0};
  
void dfs(int x)  
{  
    int i,j;  
    int p,q;  
    int num;
    int work;  
      
    for(i=1;i<str[x].length();i++)  
    {  
        num=0;  
        for(j=1;j<=n;j++)  
        {  
            if(times[j]<2)
            {  
                if(str[x][i]==str[j][0])
                {  
                    p=i,q=0,work=0;  
                    while(p<=str[x].length()-1)
                    {  
                        if(str[x][p]!=str[j][q])
                        {  
                            num++;
                            work++;  
                            break;
                        }  
                        p++;  
                        q++;  
                    }  
                    if(!work&&q!=str[j].length())
                    {  
                        len_str+=str[j].length()-q;
                        times[j]++;
                          
                        dfs(j);
                          
                        len_str-=str[j].length()-q;
                        times[j]--;
                    }  
                }  
                else num++;
              }  
              else num++;
        }  
          
        if(num==n&&i==str[x].length()-1)
        {  
              if(sum<len_str) sum=len_str;
              return;  
        }  
    }  
}  
int main()  
{  
    int i;  
  
    cin>>n;
    for(i=1;i<=n+1;i++)      cin>>str[i];
      
    for(i=1;i<=n;i++)
        if(str[i][0]==str[n+1][0])  
        {  
            times[i]++;
            len_str=str[i].length();
            dfs(i);
        }  
      
    cout<<sum<<endl;
    return 0;  
}  