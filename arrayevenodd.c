#include<stdio.h>
int main(){
    int x[6];
    int i;
    for(i=0;i<=5;i++)
    {
        scanf("%d" , &x[i]);
        if(x[i]%2==0){
            printf("no is even\n");
        }
        else
        {
            printf("no is odd\n");
        }
    }
return 0;
}