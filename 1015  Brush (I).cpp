#include<bits/stdc++.h>
int main()
{
    int tst,t,num,tp,sum,i;
    scanf("%d",&tst);
    for(t=1; t<=tst; t++)
    {
        sum=0;
        scanf("%d",&num);
        for(i=0; i<num; i++)
        {
            scanf("%d",&tp);
            if(tp>0)
            {
                sum=sum+tp;
            }
        }
        printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
