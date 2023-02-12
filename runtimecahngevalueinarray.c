#include<stdio.h>
int main(){
    int i , n ;
    printf("Enter the size of array=");
    scanf("%d" , &n);
    int x[n] ;
    for(i=0;i<=n-1;i++)
    {
        printf("Enter value =");
        scanf("%d" , &x[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("values=%d\n" , x[i]);
    }
return 0;
}