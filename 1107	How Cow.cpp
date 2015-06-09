#include<stdio.h>

int main ()
{
    int T;
    scanf("%d",&T);
    
    for(int cas=1; cas<=T; cas+=1)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int N;
        scanf("%d",&N);
        printf("Case %d:\n",cas);
        
        for(int i=0; i<N; i+=1)
        {
            int px1,py1;
            scanf("%d %d",&px1,&py1);
            if(px1>x1 && px1<x2 && py1>y1 && py1<y2)
            {
                printf("Yes\n");
            }
            else printf("No\n");
        }
    }
    return 0;
}
