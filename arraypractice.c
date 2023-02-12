#include<stdio.h>
int main(){
    int  count = 0 ;
        int m , n , j , i  ;
    float avg ;
    printf("Enter the rows");
    scanf("%d" , &m);
    printf("enter the coullums");
    scanf("%d" , &n);
    int ele = m*n ;
    int x[m][n] ; 
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++){
            scanf("%d" , &x[i][j]);
        }
    }
    for(i = 0 ; i<m ; i++)
    {
        for(j = 0 ; j<n ; j++){
            if(j<i)
            {
                x[i][j]=0 ;
            }
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
   return 0 ;
}