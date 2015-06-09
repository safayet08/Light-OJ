#include<stdio.h>

int main()
{
    long long int l1,l2,l3;
    int i,t,j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &l1,&l2,&l3);
        l1=l1*l1;
        l2=l2*l2;
        l3=l3*l3;
        if(l1+l2==l3 || l2+l3==l1 || l3+l1==l2)
            printf("Case %d: yes\n", i);
        else
            printf("Case %d: no\n", i);
    }

    return 0;
}
