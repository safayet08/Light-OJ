#include<bits/stdc++.h>
#define pi 2*acos(0)

double r1,r2,r3;
double A,B,C;
double Tarea,r1area,r2area,r3area,sum;
double angler1,angler2,angler3;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf %lf %lf",&r1, &r2, &r3);
        A=r1+r2; B=r2+r3; C=r1+r3;
        Tarea = (A+B+C)/2;
        Tarea = Tarea*(Tarea-A)*(Tarea-B)*(Tarea-C);
        Tarea = sqrt(Tarea);
        angler2 = A*A + B*B - C*C;
        angler2 = angler2 / (2*A*B);
        angler2 = acos(angler2);
        angler1 = A*A + C*C - B*B;
        angler1 = angler1 / (2*A*C);
        angler1 = acos(angler1);
        angler3 = B*B + C*C - A*A;
        angler3 = angler3 / (2*B*C);
        angler3 = acos(angler3);
        angler1 *= 180;
        angler1 /= pi;
        angler2 *= 180;
        angler2 /= pi;
        angler3 *= 180;
        angler3 /= pi;
        r1area = pi*r1*r1 * (angler1/360);
        r2area = pi*r2*r2 * (angler2/360);
        r3area = pi*r3*r3 * (angler3/360);
        sum = r1area + r2area + r3area;
        printf("Case %d: %.10lf\n",i,Tarea-sum);
    }
    return 0;
}
