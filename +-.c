#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    switch(op){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if(b!=0)
                printf("%d\n",a/b);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}