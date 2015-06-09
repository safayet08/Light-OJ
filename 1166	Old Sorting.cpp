#include<stdio.h>

int main()
{
    int a[110],n,i,k,ne[110],j,x,temp,t,f;
    scanf("%d", &t);
    for(f=1; f<=t; f++)
    {
        scanf("%d", &n);
        for(i=1; i<=n; i++)
            ne[i]=i;
        for(i=1; i<=n; i++)
            scanf("%d", &a[i]);
        k=0;
        for(x=0; x<n; x++)
        {
            for(i=1; i<=n; i++)
            {
                if(a[i]!=ne[i])
                    for(j=1; j<=n; j++)
                        if(a[i]==ne[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                            k=k+1;
                            break;
                        }
            }
        }
        printf("Case %d: %d\n", f,k);
    }
    return 0;
}
