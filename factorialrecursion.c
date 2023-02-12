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
    int sum = add(5) ;
    printf("%d" , sum);
    return 0;
}
