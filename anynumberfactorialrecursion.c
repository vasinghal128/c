#include<stdio.h>
 int add(int x)
{
    if(x>=1)
    {
        return x*add(x-1);
    }
    else
    {
        return 1 ;
    }
}
int main()
{
    int a ;
    printf("Enter any number = ");
    scanf("%d" , &a);
    int sum = add(a) ;
    printf("%d" , sum);
    return 0;
}