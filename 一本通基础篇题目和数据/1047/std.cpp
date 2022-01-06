#include <iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
         t=0;

  	if(n%3==0) t=1;//能被3整除
	if(n%5==0) t=2;//能被5整除
  	if(n%7==0) t=3;//能被7整除
 	if((n%3==0)&&(n%5==0)) t=4;//能被3、5整除
 	if((n%3==0)&&(n%7==0)) t=5;//能被3、7整除
 	if((n%5==0)&&(n%7==0)) t=6;//能被5、7整除
	if((n%3==0)&&(n%5==0)&&(n%7==0)) t=7;//能被3、5、7整除

 	switch (t)
         {
	     case 1:cout<<"3"<<endl; break;
             case 2:cout<<"5"<<endl; break;
             case 3:cout<<"7"<<endl; break;
             case 4:cout<<"3 5"<<endl; break;
             case 5:cout<<"3 7"<<endl; break;
             case 6:cout<<"5 7"<<endl; break;
             case 7:cout<<"3 5 7"<<endl; break;
             default:cout<<"n"<<endl;
         }
         return 0;
}