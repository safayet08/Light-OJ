#include<bits/stdc++.h>

int main()
{
    int u,v,w,x,p,q,r,s,T,i,m,l,t=1;
    char b[50],d[50];
    
    scanf("%d",&T);
    gets(d);
    
    for(int i=1; i<=T; i++)
    {
        gets(d);
        gets(b);
        l=strlen(d);
        
        for(i=0; i<l; i++)
            if(d[i]=='.')
                d[i]=' ';
                
        scanf(d,"%d %d %d %d",&u,&v,&w,&x);
        l=strlen(b);
        
        p=q=r=s=0;

        for(m=1,i=l-1; b[i]!='.'; i--)
        {
            s+=(b[i]-48)*m;
            m=2*m;
        }
        for(m=1,i=i-1; b[i]!='.'; i--)
        {
            r+=(b[i]-48)*m;
            m=2*m;
        }
        for(m=1,i=i-1; b[i]!='.'; i--)
        {
            q+=(b[i]-48)*m;
            m=2*m;
        }
        for(m=1,i=i-1; i>=0; i--)
        {
            p+=(b[i]-48)*m;
            m=2*m;
        }
        if(u==p&&v==q&&w==r&&x==s)
            printf("Case %d: Yes\n",t);
        else 
            printf("Case %d: No\n",i);
    }
    return 0;
}
