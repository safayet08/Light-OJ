#include<bits/stdc++.h>

int main()
{
    char s[20];
    int l,i,t,j;
    scanf("%d", &t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(s);
        l=strlen(s);
        if(l==1)
            printf("Case %d: Yes\n", i);

        else if(l==2)
        {
            if(s[0]==s[1])
                printf("Case %d: Yes\n", i);
            else
                printf("Case %d: No\n", i);
        }

        else
        {
            for(j=0; j<(l/2)+1; j++)
                if(s[j]!=s[l-(j+1)])
                {
                    printf("Case %d: No\n", i);
                    goto zz;
                }
            printf("Case %d: Yes\n", i);
        }
zz:
        ;
    }
    return 0;
}
