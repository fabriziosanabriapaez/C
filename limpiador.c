//Borre la pantalla al pulsar 1
#include<stdio.h>
#include<stdlib.h>

int main(){
    char tecla;
    printf("\nPrograma de borrado de pantalla!!!!(NO APRETAR 1)");
    printf("\nPrograma de borrado de pantalla!!!!(NO APRETAR 1)");
    printf("\nPrograma de borrado de pantalla!!!!(NO APRETAR 1)");
    printf("\nPrograma de borrado de pantalla!!!!(NO APRETAR 1)");
    
    printf("\nDigite el numero 1: ");scanf("%c",&tecla);
     if(tecla=='1'){
        system("cls");
        printf("\nHa funcionado el limpiador de pantalla");
     }
     else{
        printf("\nMuy bien no apretaste el numero 1");
     }


    return 0;
}