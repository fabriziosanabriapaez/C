#include<stdio.h>
int main(){
    float nota;
    printf("Digite a la nota: ");scanf("%f",&nota);

    if(nota>10.5){
        printf("El alumno esta aprobado");
    }
    else{
        printf("El alumno esta desaprobado");
    }


    return 0;
}