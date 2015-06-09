#include<stdio.h>

int main ()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i+=1)
    {
        double a,b,c,d1,d2;
        bool flag=true;
        scanf("%lf %lf %lf",&a,&b,&c);
        if(b!=0) d1 = (a*c)/b ;
        else flag=false;
        d2 = (a+d1) * (c+d1) ;
        if(b != d1 )
            d2 = d2/(b-d1);
        else
            flag=false;
        d1 = d1 + d2 ;
        if(!flag)
            printf("Case %d: -1\n",i);
        else if(d1<0)
            printf("Case %d: -1\n",i);
        else
            printf("Case %d: %.10lf\n",i,d1);
    }
    return 0;
}
