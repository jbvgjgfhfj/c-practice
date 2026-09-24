#include<stdio.h>
#include<stdlib.h>
int main()
{int number,a,sum=0;
    printf("please cin your number：  \n");
scanf("%d",&number);
int *p=malloc(number*sizeof(int));
for(int i=0;i<=number-1;i++){
    printf("please cin your score:  \n");
scanf("%d",&a);
sum+=a;
}
double average;
average=1.0*sum/number;
printf("your number is%d.\nyour average is%d",number ,average);

return 0;

}