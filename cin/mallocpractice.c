#include<stdio.h>
#include<stdlib.h>
int main()
{int number,sum=0,c;
    printf("please cin your number：  \n");
scanf("%d",&number);
int *p=(int*)malloc(number*sizeof(int));
int i;
for( i=0;i<=number-1;i++){
    printf("please cin your score:  \n");
scanf("%d",&p[i]);
sum+=p[i];
}
double average;
average=1.0*sum/number;
printf("your number is %d.\nyour sum is %d\nyour average is %lf\n",number ,sum,average);
for (c=0;c<=number-1;c++)
{
	printf("%d\n",p[c]);}
return 0;
}