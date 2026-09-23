#include <stdio.h>
int main(){
    int hour1,hour2,minute1,minute2;
    scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
    int t;
    t=hour2*60+minute2-hour1*60-minute1;
    int x,y;
    x=t/60;
    y=t%60;
    printf("时间间隔%d小时%d分钟!",x,y);
    return 0;

}