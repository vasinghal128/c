#include<stdio.h>
void printtable();
int main(){
    int n  ;
    printf("Enter any number : ");
    scanf("%d" , &n);
    printtable(n);
return 0;
}
void printtable(int n ){
    int i ;
    for(i=0;i<=10;i++){
        printf("%d\n" , i*n);
    }
}