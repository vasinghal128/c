#include<stdio.h>
int main(){
    int n , i , a , p ;
    printf("Enter size of array");
    scanf("%d" , &n);
    int x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the values =");
        scanf("%d" , &x[i]);
    }
    printf("Enter number for update= ");
    scanf("%d" , &a);
    printf("Enter the position =");
    scanf("%d" , &p);
    for(i=n-1;i>=p;i--)
    {
        x[i+1] = x[i];
    }
    x[p]=a;
    for(i=0;i<=n+1;i++)
    {
        printf("%d\t" , x[i]);
    }
return 0;
}