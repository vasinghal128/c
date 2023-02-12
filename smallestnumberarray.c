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
    a = x[0];
        for(i=0;i<n;i++)
        {
            if(x[i]<a)
            {
                a = x[i];
            }
        }
        printf("%d" , a);
    }

 