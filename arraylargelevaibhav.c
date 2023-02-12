#include<stdio.h>
void main()
{
    int n , i , j , a;
    printf("Enter array size");
    scanf("%d" , &n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d" , &x[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(x[i]>x[i+1])
            {
                a = x[i];
                x[i] = x[i+1] ;
                x[i+1] = a ;
            }
        }
    }
    int p;
    printf("Enter the position of array");
    scanf("%d" , &p);
    printf("%d" , x[p]);
   
}