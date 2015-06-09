#include<bits/stdc++.h>

int main()
{
    double ox, oy, ax, ay, bx, by, a, b, o, angle_o, md;
    scanf("%d",&T);
    for(int i=1; i<=T; i)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox, &oy, &ax, &ay, &bx, &by);
        a=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        b=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        o=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        angle_o=acos((b*b+a*a-o*o)/(2*b*a));
        md=a*angle_o;
        printf("Case %d: %.10lf\n",i,md);
    }
    return 0;
}
