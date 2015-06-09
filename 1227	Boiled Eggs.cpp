#include<stdio.h>

int main()
{
    int n,p,q,a[40],i,t,j,sum,x;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d %d %d", &n,&p,&q);
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        sum=0;
        x=0;
        bool flag = false;
        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
            x=x+1;
            if(sum>q)
            {
                if(x-1<=p)
                    printf("Case %d: %d\n", j,x-1);
                else
                    printf("Case %d: %d\n", j,p);
                break;
            }
            else if(sum==q)
            {
                if(x<=p)
                    printf("Case %d: %d\n", j,x);
                else
                    printf("Case %d: %d\n", j,p);
                break;
            }

            if(i == n-1)
                flag = true;
        }

        if(x<=p && flag)
            printf("Case %d: %d\n", j,x);
        else if(x>p && flag)
            printf("Case %d: %d\n", j,p);
    }
    return 0;
}
