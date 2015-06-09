#include<stdio.h>

int main()
{
    char s[25];
    int t,l,i,x,mm;
    long int a,sum;
    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        sum=0;
        scanf("%d", &mm);
        printf("Case %d:\n", i);
        for(x=0; x<mm; x++)
        {
            scanf("%s", s);

            if(s[0]=='d')
            {
                scanf("%ld", &a);
                sum=sum+a;
            }

            else
                printf("%ld\n", sum);
        }
    }
    return 0;
}
