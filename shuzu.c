#include<stdio.h>
int main()
{
    int number[20];
    int x,y;
    for (x=0;x<=19;x++)
    {y=x+1;
        number[x]=y;
        
    }printf("numbers数组为：");
    for(x=0;x<=19;x++)
    {
        printf("%d",number[x]);
    }
        return 0;
}