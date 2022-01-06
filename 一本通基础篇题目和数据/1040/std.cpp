#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double N;
	cin>>N;
 	cout<<setiosflags(ios::fixed)<<setprecision(2);
 	if(N>=0) cout<<N<<endl;
 	else cout<<-N<<endl;
 	return 0;
}