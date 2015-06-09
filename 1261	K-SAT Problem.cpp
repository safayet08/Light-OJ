#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v[32];
    bool ara[32];
    int T;
    scanf("%d",&T);
    for(int q=1; q<=T; q++)
    {
        memset(ara,0, sizeof(ara));
        int n,m,k,p,num;
        scanf("%d %d %d",&n,&m,&k);
        for(int i=1;i<=n;i++)
        {
            v[i].push_back(0);
            for(int j=1;j<=k;j++)
            {
                scanf("%d",&num);
                v[i].push_back(num);
            }
        }

        scanf("%d",&p);
        for(int i=0; i<p; i++)
        {
            scanf("%d",&num);
            ara[num]=1;
        }

        bool test1=0,test2=0;
        for(int i=1;i<=n;i++)
        {
            test1=0;
            for(int j=1;j<=k;j++)
            {
                if(v[i][j]>0 && ara[v[i][j]])
                    test1=1;
                if(v[i][j]<0 && !ara[-v[i][j]])
                    test1=1;
            }
            if(test1==0)
                test2=1;
        }
        printf("Case %d: ",q);
        if(test2)
            printf("No\n");
        else
            printf("Yes\n");
        for(int r=0; r<=n; r++)
            v[r].clear();
    }
    return 0;
}
