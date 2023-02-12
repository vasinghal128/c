#include<stdio.h>
int main(){
    int x[10],i, a,c=0 ;
        for(i=0;i<10;i++)
        {
            printf("Enter array the values=");
            scanf("%d" , &x[i]);
        }
       printf("enter number for frequncy=");
       scanf("%d",&a);
       for(i=0;i<10;i++){
        if(x[i]==a)
        {
            c++;
        }
       }
       printf("count=%d" , c);
return 0;
}