#include <cstdio>
#include <cstring>


char str[1000];
int main(){
    scanf("%s",str);
    if( str[0] != '-')
        printf("-");
    printf("%s",str);
    return 0;
}
