#include<stdio.h>
int main()
{
    int array[10];
    int x,count=0,sum=0;
    for (x=0;x<=9;x++)
    {int a;
        scanf("%d",&a);
        array[x]=a;
        count++;
        sum+=a;
    }
    int average;
    average=sum/count;
printf("%d %d",count,average);
return 0;
}
