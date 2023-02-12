#include<stdio.h>
int main(){
    int i , n , a , b,y;
    printf("Enter the isze of array");
    scanf("%d" , &n);
    int x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the values:");
        scanf("%d" , &x[i]);
    }
    for(i=0;i<n;i++)
    
    {
      a = x[i];
      if(a%2==0){
        printf("even num is %d\t" , a);
       int y[a];

      }
    }
     printf("\n");
     
     for(i=0;i<n;i++){
      b=x[i];
      if(b%2!=0){
        printf("odd num is %d\t" , b);
      }
     } 
return 0;
}