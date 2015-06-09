#include<bits/stdc++.h>

double f[1000010];

int main()
{
    int T;
    long i,n,b;
    scanf("%d",&T);
    for(i=1; i<=1000000; i++)
        f[i]=log((i))+f[i-1];
    for(int p=1 ; p<=T ; p++)
    {
        scanf("%ld %ld",&n,&b);
        printf("Case %d: %ld\n",p,(long)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}
