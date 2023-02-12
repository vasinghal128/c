#include<stdio.h>
int main(){
    char i,j;
    for( i='a';i<='z';i++)
    {
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
        {
            for(j='a';j<=i;j++)
            {
                 if(j=='a' || j=='e' || j=='i' || j=='o' || j=='u')
                 {
                 printf("%c",j);
                 }
            }
    
    printf("\n");
        }
    }
return 0;
}