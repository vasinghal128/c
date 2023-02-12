#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 24;
    int*ptr = &age ;
    int*_ptr = &_age ;
    printf("%u , %u , diffrence = %u\n" , ptr , _ptr , ptr-_ptr);
    _ptr = &age;
    printf("compersion = %u\n" , ptr == _ptr);
    return 0;  
}