#include<stdio.h>
int main(){
    int m , n , i , j ;
    printf("Enter the value of m");
    scanf("%d" , &m );
    
    printf("Enter the value of n");
    scanf("%d" , &n );

    int marks[m][n] ;
    int x[m][n] ;
    int y[m][n] ;

    for(i = 0 ; i<m ; i++){
        for(j = 0 ; j<n ; j++){
            printf("Enter the value of marks ");
            scanf("%d" , &marks[i][j]);
        }
    }
    for(i = 0 ; i<m ; i++){
        for(j = 0 ; j<n ; j++){
            printf("Enter the value of x");
            scanf("%d" , &x[i][j]);
        }
    }
       
 for(i = 0 ; i<m ; i++){
        for(j = 0 ; j<n ; j++){
            y[i][j]=marks[i][j]*x[i][j];
            printf("marks[%d][%d]*x[%d][%d] = %d\n" , i , j , i , j , y[i][j]);
            
        }
    }
return 0;
}