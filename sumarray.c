#include<stdio.h>
int main(){
    int i , n ;
    printf("enter size of array=");
    scanf("%d" , &n);
    int x[n];
    int y[n];
    int z[n];
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the value=");
        scanf("%d" , &x[i]);
    }
    for(i=0;i<=n-1;i++)
    {
    printf("Enter the value=");
    scanf("%d" , &y[i]);
    }
    for(i=0;i<=n-1;i++){
        z[i] = x[i]+y[i];
        printf("z[%d]=%d\n",i,z[i]);
    }
return 0;
}