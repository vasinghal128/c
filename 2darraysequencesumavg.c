#include<stdio.h>
int main(){
    int m , n, i , j ;
    float sum = 0 , avg ;
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
           sum = sum+x[i][j];
           avg = sum/(m*n); 
        }
        printf("\n");
    }
    printf("sum = %f\n" , sum);
    printf("avg = %f\n" , avg);
return 0;
}
