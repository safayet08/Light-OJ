#include<bits/stdc++.h>
using namespace std;

int A[30][4];
int dp[30][4];
int n;
int call (int pos, int prev)
{
    if(dp[pos][prev] != -1)
    {
        return dp[pos][prev];
    }
    if(pos > n)
        return 0;
    int ret;
    if(prev == 1)
    {
        ret = min (call (pos+1, 2) + A[pos][2] , call (pos+1, 3) + A[pos][3]);
    }
    if(prev == 2)
    {
        ret = min (call (pos+1, 1) + A[pos][1] , call (pos+1, 3) + A[pos][3]);
    }
    if(prev == 3)
    {
        ret = min (call (pos+1, 2) + A[pos][2] , call (pos+1, 1) + A[pos][1]);
    }
    return dp[pos][prev] = ret;
}

int main ()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        memset(dp, -1, sizeof(dp));
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d %d",&A[i][1],&A[i][2],&A[i][3]);
        }
        printf("Case %d: %d\n",i,min(min(call(1,1),call(1,2)), call(1,3)));
    }
    return 0;
}
