#include<stdio.h>
int main(){
    int m ,n ,i , j ;
    printf("Enter row value");
    scanf("%d" , &m);
        printf("Enter colume value");
    scanf("%d" , &n);
    int x[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" , &x[i][j]);
        }
    }
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t" , x[i][j]); 
        }
        printf("\n");
    }
return 0;
}