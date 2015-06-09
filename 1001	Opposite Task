#include<bits/stdc++.h>
int main()
{
    int n,i,arr[23]= {0};
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int b;
        scanf("%d",&b);
        if(b==0)
            printf("0 0\n");
        else if(b==20)
            printf("10 10\n");
        else if(b<11)
            printf("%d %d\n",arr[b],abs(b-arr[b]));
        else
        {
            int p=10-arr[b];
            printf("%d %d\n",p,abs(b-p));

        }
        arr[b]++;

    }
    return 0;
}
