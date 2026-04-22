//Usuario digita nombre y signo, imprimri el nombre si es de signo aries, si no imprimri no es de signo aries.
#include<stdio.h>
#include<string.h>
int main(){
    char nombre[30],signo[30];
    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    if (strcmp(signo,"aries")==0){
        printf("%s es de signo aries.",nombre);
    }
    else{
        printf("%s no es de signo aries.",nombre);
    }


    return 0;
}