#include<stdio.h>
void main(){
    int i , j = 0 , m , n ;
    printf("Enter the m value");
    scanf("%d" , &m);
    int x[m];
    for(i=0;i<m;i++)
    {
        scanf("%d" , &x[i]);
    }
    printf("Enter the n value");
    scanf("%d" , &n);
     int y[n] ;
    for(i=0;i<n;i++)
    {
        scanf("%d" , &y[i]);
    }
     
    int o = m + n ;
    int z[o];
    for(i=0;i<m;i++)
    {
        z[i] = x[i];
    }
    for(i=m;i<o;i++)
    {
        z[i] = y[j] ;
        j++ ;
    }
    for(i=0;i<o;i++)
    {
        printf("%d" , z[i]);
    }
}