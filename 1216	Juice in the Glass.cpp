#include<bits/stdc++.h>
#define pi 2*acos(0)

double r1,r2,h,p;
double v1,v2,v3;
double result;
double theta;
double GI,GR,BE,HI,GN,GP;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf %lf %lf %lf",&r1, &r2, &h, &p);
        theta = h / (r1-r2);
        theta = atan(theta);
        GI = p / sin(theta);
        BE = r1 * tan(theta);
        HI = GI*GI - p*p;
        HI = sqrt(HI);
        GN = (r2+HI) * tan(theta);
        GP = r2 * tan(theta);
        GR = GN / tan(theta);
        v1 = pi * (r2*r2) * (GP/3);
        v2 = pi * (GR*GR) * (GN/3);
        v3 = pi * (r1*r1) * (BE/3);
        result = v2 - v1;
        printf("Case %d: %.10lf\n",i,result);
    }
    return 0;
}
