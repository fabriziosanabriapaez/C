#include<stdio.h>
int main (){
    char nota;
    printf("Digite su nota: ");scanf("%c",&nota);

     switch (nota)
    {
    case 'A': printf("\nExcelente");
        break;
    case 'B': printf("\nNotable");
        break;
    case 'C': printf("\nAprobado");
        break;
    case 'D':
    case 'F': printf("\nDesaprobado");
        break;
    default: printf("\nNo hay nota");
        break;
    }
    return 0;
}