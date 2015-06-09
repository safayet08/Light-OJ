#include<bits/stdc++.h>

int main()
{
    int i,l1,l2,j,p,x,y,l3,l4;
    char a[10000],b[10000],c[10000],d[10000],e;
    scanf("%d",&T);
    getchar();
    for(int m=1; m<=T; m++)
    {
        gets(a);
        gets(b);
        l1=strlen(a);
        l2=strlen(b);
        x=0;
        y=0;
        p=0;
        for(i=0; i<l1; i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]-32;
            }
        }
        for(i=0; i<l1; i++)
        {
            if(a[i]!=' ')
            {
                c[x]=a[i];
                x++;
            }
        }
        c[x]='\0';
        for(i=0; i<l2; i++)
        {
            if(b[i]>='a'&&b[i]<='z')
            {
                b[i]=b[i]-32;
            }
        }
        for(i=0; i<l2; i++)
        {
            if(b[i]!=' ')
            {
                d[y]=b[i];
                y++;
            }
        }
        d[y]='\0';
        l3=strlen(c);
        l4=strlen(d);
        for(i=0; i<l3-1; i++)
        {
            for(j=0; j<l3-1; j++)
            {
                if(c[j]>c[j+1])
                {
                    e=c[j];
                    c[j]=c[j+1];
                    c[j+1]=e;
                }
            }
        }
        for(i=0; i<l4-1; i++)
        {
            for(j=0; j<l4-1; j++)
            {
                if(d[j]>d[j+1])
                {
                    e=d[j];
                    d[j]=d[j+1];
                    d[j+1]=e;
                }
            }
        }

        if(strcmp(c,d)==0)
            printf("Case %d: Yes\n",m);
        else
            printf("Case %d: No\n",m);
    }
    return 0;
}
