#include<bits/stdc++.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        long long int f[10005],n,j;
        for(j=0; j<6; j++)
        {
            scanf("%lld",&f[j]);
        }
        scanf("%d",&n);
        for(j=6; j<=n; j++)
        {
            f[j]=(f[j-1]+f[j-2]+f[j-3]+f[j-4]+f[j-5]+f[j-6])%10000007;
        }
        printf("Case %d: %lld\n",i,f[n]% 10000007);
    }
    return 0;
}
