#include<stdio.h>

int main()
{
    char s[120];
    int i,t,j,n,sum;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d", &n);
        getchar();
        gets(s);
        for(j=0; j<n; j++)
            if(s[j]=='.')
            {
                sum=sum+1;
                j=j+2;
            }
        printf("Case %d: %d\n", i,sum);
    }

    return 0;
}
