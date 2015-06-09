#include<bits/stdc++.h>

int main()
{
    double h,area,a,b,c,d,s,x, triangleArea;
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf %lf %lf %lf",&a, &b, &c, &d);
        x = fabs(a - c);
        s = 0.5*(x+b+d);
        triangleArea = sqrt(s*(s-x)*(s-b)*(s-d));
        h = (triangleArea*2)/x;
        printf("Case %d: %.10lf\n",i,(0.5*(a+c)*h));
    }

    return 0;
}

