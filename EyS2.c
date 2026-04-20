#include<stdio.h>
int main(){
    char c[50];
    printf("Digite su nombre: ");
    gets(c);
    
    printf("Su nombre es: %s",c);
    return 0;
}