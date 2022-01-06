#include <stdio.h>

#include<algorithm>
#include <string.h>
#include<iostream>
using namespace std;
char s1[201],s2[201];
int main()
{
    int i;
    scanf("%s%s",s1,s2);
    if(strlen(s1)>strlen(s2))
    {
        if(strstr(s1,s2)!=NULL) printf("%s is substring of %s",s2,s1);
        else printf("No substring");
    }
    else if(strlen(s1)<strlen(s2))
    {
        if(strstr(s2,s1)!=NULL) printf("%s is substring of %s",s1,s2);
        else printf("No substring");
    }
    else printf("No substring");
    return 0;
}
