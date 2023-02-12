#include<stdio.h>
int main(){
    int i,j=1,k=2;
  
    for(i=1;i<=4;i++)
    {
      printf("%d",j);
      j=+j+2;
      printf("%d",k);
      k=k+2;
      printf("%d",k);
      k=k+2;
    }
return 0;
}