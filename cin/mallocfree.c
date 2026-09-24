#include<stdio.h>
#include<stdlib.h>
int main()
{int number,a,sum=0;
    printf("please cin your number：  \n");
scanf("%d",&number);
int *p=malloc(number*sizeof(int));
for(int i=0;i<=number-1;i++){
    printf("please cin your score:  \n");
scanf("%d",p);
sum+=p[i];
}
double average;
average=sum/number;
printf("your number is %d.\nyour sum is %d\nyour average is %d\n",number ,sum,average);
for (int c=0;c<=number;p[c]);
return 0;
}