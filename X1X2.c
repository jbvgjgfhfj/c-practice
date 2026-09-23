#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double x;
    int delta=b*b-4*a*c;
    if (delta<0){
        printf("该方程无解");}
        else if (delta==0)
        {
            x=-b/(2.0*a);
            printf("有唯一解x=%lf",x);
            
        }
        else {
            double x1,x2;
            x1=(-b+sqrt(delta))/(2.0*a);
            x2=(-b-sqrt(delta))/(2.0*a);
            printf("有两个解，x1=%lf，x2=%lf",x1,x2);
        }return 0;
    }
