#include<stdio.h>
int main(){
    int m , n , j , i , a , count=0 , c = 0;
    printf("Enter the value of m");
    scanf("%d" , &m);
    printf("Enter the value of n");
    scanf("%d" , &n);
    int x[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the values");
            scanf("%d" , &x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("x[%d][%d] = %d\n" , i , j , x[i][j]);
        }
    }

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a = x[i][j]%2;
            if(a==0)
            {
                count++;
                
            }
            else if(a!=0)
            {
                c++;
                
            }
        }
    }
printf("even no . is %d\n" , count);
printf("Odd no. is %d" , c);
return 0;
}