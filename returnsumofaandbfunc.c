#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the value of a  : " );
    scanf("%d" ,  &a);
    printf("Enter the value of b  : " );
    scanf("%d" ,  &b);
    int s = sum(a , b);
    printf("Sum is : %d \n" , s);   
    return 0;
}
int sum(int x , int y){
    return x + y ;
}