#include<bits/stdc++.h>

int main()
{
    int T, a, b;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d %d",&a, &b);
        printf("Case %d: %d\n",i,(int)abs((double)a-b)*4+a*4+19);
    }
    return 0;
}
