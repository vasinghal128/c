#include<stdio.h>
int main(){
    int m , n , i , j ;
    printf("Enter the value of m");
    scanf("%d" , &m );
    
    printf("Enter the value of n");
    scanf("%d" , &n );

    int marks[m][n] ;

    for(i = 0 ; i<m ; i++){
        for(j = 0 ; j<n ; j++){
            printf("Enter the value ");
            scanf("%d" , &marks[i][j]);
        }
    }
       
 for(i = 0 ; i<m ; i++){
        for(j = 0 ; j<n ; j++){
            printf("marks[%d][%d] = %d\n" , i , j , marks[i][j]);
            
        }
    }
return 0;
}