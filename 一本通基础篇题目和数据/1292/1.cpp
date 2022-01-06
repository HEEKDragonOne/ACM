#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int n,m,k;
int _max = -1;
int a[105];
int b[105];
int f[105][1005][505]={0};  //可以存下来


void init(){
    scanf("%d%d%d",&n,&m,&k);
    int i;
    for (i=1;i<=k;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
}

void dp(){
    int i,x,y;
    for (i=1;i<=k;i++){ //前i个精灵
        for (x=0;x<=n;x++) //消耗的球
            for (y=0;y<=m;y++){ //消耗的体力
                if( x >= a[i] && y >=b[i])  //可以抓
                {
                    f[i][x][y] = max( f[i-1][x-a[i]][y-b[i]]+1,f[i-1][x][y]);
                    _max = max(_max,f[i][x][y]);
                }
                else
                    f[i][x][y] = f[i-1][x][y];
            }
    }
}

int main(){
    init();
    dp();

    /* 最大体力 */
    int i,j;

    if( _max == 0){
        printf("%d %d\n",_max,m);
        return 0;
    }

    int R = 0x3f3f3f3f;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            if( f[k][i][j] == _max &&  R > j){
                R = j;
            }

        }

    printf("%d %d\n",_max,m-R);

    return 0;
}
