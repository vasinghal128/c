#include<stdio.h>
int main()
{
int n , i;
printf("Enter the size of array");
scanf("%d" , &n);
int x[n];
for(i=0;i<n;i++)
{
    printf("Enter values :");
    scanf("%d" , &x[i]);
}
for(i=n-1;i>=0;i--)
{
    printf("x[%d] = %d\n" ,i , x[i]);
}

return 0;
}