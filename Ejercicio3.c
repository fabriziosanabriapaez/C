//Haver un programa que calcule areas de trapecios
#include<stdio.h>

int main(){
    int baseMy,baseMr,area,altura;

    printf("Digite la Base mayor: ");
    scanf("%i",&baseMy);
    printf("Digite la Base menor: ");
    scanf("%i",&baseMr);
    printf("Digite la altura: ");
    scanf("%i",&altura);

    area=((baseMy+baseMr)*altura)/2;

    printf("\nEl area del trapecio es: %i",area);

    return 0;
}