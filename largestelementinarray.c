//important
#include<stdio.h>
int main()
{
    int i,n , a ;
    printf ("Enter the size of array");
    scanf("%d" , &n);
    int x[n] ;
    for(i=0;i<n;i++)
    {
        printf("Enter the value ");
        scanf("%d" , &x[i]);
       a = x[0];
    }
    for(i=0;i<n;i++)
   {
        if(x[i]>a)
        a = x[i];
   }
    printf("%d" , a);
    return 0;
}