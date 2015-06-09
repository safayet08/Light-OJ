#include<bits/stdc++.h>

int main()
{
    double s, ab, ac, bc, rat, area_abc, area_ade, ad;
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&rat);
        s=(ab+ac+bc)/2.0;
        area_abc=sqrt(s*(s-ab)*(s-ac)*(s-bc));
        area_ade=(area_abc/(rat+1.0))*rat;
        ad=sqrt((ab*ab)*(area_ade/area_abc));
        printf("Case %d: %.10lf\n",i,ad);
    }
    return 0;
}
