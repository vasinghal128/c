// write a program to print namaste 9if user indian & Bonjour if user is french
#include<stdio.h>
void Namaste();
void Bonjure();
int main(){
    
    char coun;
    printf("Enter your country name");
    scanf("%c" , &coun);
    
    if(coun == 'I' || coun == 'i'){
        Namaste();
    }
    else{
        Bonjure();
        
    }
    return 0;
}
    void Namaste(){
        printf("Namaste");
    }
    void Bonjure(){
        printf("Bonjure");
    }
