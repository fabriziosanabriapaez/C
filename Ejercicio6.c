//Calcular el mayor de dos numeros digitalizados y visualizarlos en pantalla
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Digite dos numeros: ");scanf("%i %i",&n1,&n2);

    if(n1>n2){
        printf("%i es mayor a %i",n1,n2);
    }
    else{
        if(n2>n1){
            printf("%i es mayor a %i",n2,n1);
        }
        else{
            printf("%i es igual a %i",n1,n2);
        }
    }


    return 0;
}