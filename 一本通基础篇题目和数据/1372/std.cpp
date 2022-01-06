#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
multiset<int> st;//定义int类型的set
int main()
{
    int n;
    cin>>n;
    st.clear();
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            int a;
            cin>>a;
            st.insert(a);//插入元素
        }

        cout<<*st.begin()<<" ";//输出最小元素
        st.erase(st.begin());//删除set中最小元素
        cout<<*(--st.end())<<endl;//输出最大元素
        st.erase(--st.end());//删除set中最大元素
    }

    return 0;
}
