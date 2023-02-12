#include<stdio.h>
void main(){
    int x,a,b,i,num;
    a=0;
    b=1;
    printf("Enter the number");
    scanf("%d",&num);
    printf("%d\n%d",a,b);
    for(i=2;i<num;i++)
    {
        x=a+b;
        printf("%d\n",x);
        a=b;
        b=x;
    }
}