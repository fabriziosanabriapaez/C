//1.Pedir 2 numeros al usuario y sumarlos, restarlos, multiplicalos y dividilos
#include<stdio.h>
int main(){
    int n1,n2,suma=0,resta=0,multi=0,dividir=0;

    printf("digite los dos numeros: ");
    scanf("%i %i",&n1,&n2);

    suma=n1+n2;
    resta=n1-n2;
    multi=n1*n2;
    dividir=n1/n2;

    printf("\nla suma es: %i",suma);
    printf("\nla resta es: %i",resta);
    printf("\nla multi es: %i",multi);
    printf("\nla dividir es: %i",dividir);

    return 0;
}