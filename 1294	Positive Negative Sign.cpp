#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i <= T; i++)
    {
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        printf("Case %d: %lld\n",i,(n*m)/2);
    }
    return 0;
}
