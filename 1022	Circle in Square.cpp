#include<bits/stdc++.h>
#define PI 2*acos(0.0)

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        double r,a,b,c;
        scanf("%lf",&r);
        a=(2*r)*(2*r);
        b=PI*r*r;
        c=a-b;
        printf("Case %d: %.2lf\n",i,c);
    }
    return 0;
}
