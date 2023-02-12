#include<stdio.h>
int main(){
    int i ,n , sum=0 , avg;
    printf("Enter the size of array");
    scanf("%d" , &n);
    int x[n];
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the value ");
        scanf("%d" , &x[i]);
    }
        for(i=0;i<n;i++)
        {
        printf("VALUE = %d ",  x[i]);
        }
    
    for(i=0;i<=n-1;i++)
    {
        sum = sum+x[i];
    }
    printf("sum is %d" , sum);
    avg = sum/n;
    printf("The average of elements is %d" , avg);
return 0;
}