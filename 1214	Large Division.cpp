#include<bits/stdc++.h>

int main()
{
    long long b,rem, cnt, len, mul, initial;
    int T;
    char arr[222];
    scanf("%d",&T);
    getchar();
    for(int i=1; i<=T; i++)
    {
        memset(arr, '\0' , sizeof(arr));
        initial=0;
        scanf("%s", arr);
        scanf("%lld",&b);

        if(b < 0)
            b = b*(-1);

        if(arr[0] == '-')
            initial = 1;

        len = strlen(arr);

        mul = 0;
        cnt = 0;

        for(int j = initial; arr[j] != '\0'; j++)
        {
            mul=(arr[j]-'0')+mul;
            rem=mul%b;
            mul=rem*10;
            if(rem==0 && j==(len-1))
            {
                cnt++;
                printf("Case %d: divisible\n",i);
            }
        }
        if(cnt==0)
        {
            printf("Case %d: not divisible\n",i);
        }
    }
    return 0;
}
