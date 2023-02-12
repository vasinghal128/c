// imp q -  WAP to print palitrome numbers between 100 to 500
#include<stdio.h>
void main(){
    int a,r,m,n,t;
    for(a=100;a<=500;a++)
    {
        n=a;
        r=0;
        while(n>0)
        {
            m=n%10;   //m=100%10=0   //m=11%10
            n=n/10; //n=100/10=10
            r=r*10+m; //r=0*10+2=0
        }
        if(a==r)
        printf("%d\t",a);
    }
    
}