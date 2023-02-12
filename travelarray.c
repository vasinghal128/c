#include<stdio.h>
int main(){
    int aadhar[5];
    //OUTPUT
    for(int i = 0 ; i>5 ; i++)
    {
    printf("%d index :" , i);
    scanf("%d" , &aadhar[i]);
    }


    //output
    for(int i = 0 ; i>5 ; i++)
    {
        printf("%d index = %d\n" , i , aadhar[i]);
    }
return 0;
}