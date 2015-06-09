#include<stdio.h>

int main()
{
    char s[100], ws[200][100];
    int i,j,t,temp;
    ws[0][0]='h';
    ws[0][1]='t';
    ws[0][2]='t';
    ws[0][3]='p';
    ws[0][4]=':';
    ws[0][5]='/';
    ws[0][6]='/';
    ws[0][7]='w';
    ws[0][8]='w';
    ws[0][9]='w';
    ws[0][10]='.';
    ws[0][11]='l';
    ws[0][12]='i';
    ws[0][13]='g';
    ws[0][14]='h';
    ws[0][15]='t';
    ws[0][16]='o';
    ws[0][17]='j';
    ws[0][18]='.';
    ws[0][19]='c';
    ws[0][20]='o';
    ws[0][21]='m';
    ws[0][22]='/';
    ws[0][23]='\0';
    
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n", i);
        j=0;
        temp=0;
        while(1)
        {

            scanf("%s", s);

            if(s[0]=='Q')
                break;

            else if(s[0]=='V')
            {
                scanf("%s", ws[temp+1]);
                printf("%s\n", ws[temp+1]);
                j=temp+1;
                temp=j;
            }

            else if(s[0]=='B')
            {
                temp=temp-1;
                if(temp<0)
                {
                    printf("Ignored\n");
                    temp=temp+1;
                }

                else
                    printf("%s\n", ws[temp]);
            }

            else if(s[0]=='F')
            {
                temp=temp+1;
                if(temp>j)
                {
                    printf("Ignored\n");
                    temp=temp-1;
                }
                else
                    printf("%s\n", ws[temp]);
            }
        }

    }
    return 0;
}
