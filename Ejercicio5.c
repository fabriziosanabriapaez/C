//Programa que comprube si un alumno aprobo o no un examen. Aprueba si su nota es mayor a 10.5

#include<stdio.h>
int main(){
    float examen;
    printf("Digite la nota del examen: ");scanf("%f",&examen);
    if (examen>10.5){
        printf("El alumno esta aprobado con %.1f",examen);
    }

    return 0;
}