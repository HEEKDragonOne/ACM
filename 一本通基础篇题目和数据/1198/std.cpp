#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
char a[55];
double calculate()
{
    scanf("%s",a);
    if(a[0]=='+')
        return calculate()+calculate();
    else if(a[0]=='-')
        return calculate()-calculate();
    else if(a[0]=='*')
        return calculate()*calculate();
    else if(a[0]=='/')
        return calculate()/calculate();
    else
        return atof(a);
}
int main()
{
    printf("%f\n",calculate());
    return 0;
}
