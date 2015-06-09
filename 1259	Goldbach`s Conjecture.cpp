#include<bits/stdc++.h>
#define MAX 10000000
#define MAX1 667743

bool a[MAX];
long int b[MAX1+1];
long int nprime;

void seieve()
{
    int imax,i,j=0,jmax;

    for(i=0; i<=MAX; i++)
        a[i]=true;

    imax=sqrt(MAX)+1;

    for(i=2; i<=imax; i++)
    {
        jmax=(MAX/i)+1;

        if(a[i]==1)
            for(j=2; j<=jmax; j++)
                if(i*j<=MAX)
                    a[i*j]=false;
    }

    a[0]=0;
    a[1]=0;

    for(i=2; i<=MAX; i++)
        if( a[i] )
            b[j++]=i;
    nprime=j;
}

int main()
{
    int T;
    long int cnt=0,n;
    seieve();
    scanf("%d",&T);
    for(int j=1; j<=T; j++)
    {
        scanf("%ld",&n);

        for(int i=0; i<nprime && n/2>=b[i] ; i++)
            if( a[n-b[i] ] )
                cnt++;

        printf("Case %d: %ld\n",j,cnt);
        cnt=0;
    }
    return 0;
}
