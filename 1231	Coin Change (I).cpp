#include<bits/stdc++.h>
#define MOD 100000007

int A[55], C[55], n, k;
int dp[55][1010];

int call (int pos, int made)
{
    if(made == k)
        return 1;
    if(made > k)
        return 0;
    if(pos > n)
        return 0;
    if(dp[pos][made]!=-1)
        return dp[pos][made];
    int ret = 0;
    for(int i=0; i<=C[pos]; i++)
    {
        ret= (ret + (call( pos+1, made + i*A[pos])) % MOD);
    }
    dp[pos][made] = ret;
    return ret;
}

int main ()
{
    int cs;
    scanf("%d",&cs);
    for(int i=1; i<=cs; i++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d %d", &n, &k);
        for(int j=1; j<=n; j++)
            scanf("%d",&A[j]);
        for(int j=1; j<=n; j++)
            scanf("%d",&C[j]);
        printf("Case %d: %d\n",i, call(0,0));
    }
    return 0;
}
