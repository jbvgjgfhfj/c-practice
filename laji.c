#include<stdio.h>
int main()
{
    int a;
    for (int i=1;i<=9;i++)
    {
        printf("%d",i);
        if (i==9)
        {
            printf("\n");
        }
    }
    printf("---------------");
    for(int j=1;j<=9;++j)
    {
        for(int i=1;i<=9;i=++i)
        {
            a=i*j;
            printf("%d ",a);
            if(i==9)
            printf("\n");
        }
    }return 0;
}