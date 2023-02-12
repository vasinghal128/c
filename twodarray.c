#include<stdio.h>
int main(){
    int m , n , i , j ;
    printf("Size of array");
    scanf("%d" , &m);
    printf("Size of array");
    scanf("%d" , &n);
    int x[m][n] ;
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d %d" , &x[i][j]);
        }
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("x[%d][%d]=%d\n" , i , j , x[i][j]);
        }
    }
return 0;
}