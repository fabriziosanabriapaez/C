#include<stdio.h> //Libreria

#define PI 3.1416 //Macro
 int y = 5; //Variable Global
int main(){
    int x = 10; //Variable Local
    float suma = 0;
    suma = PI + x;
    printf("la suma es: %f",suma);
        return 0;
}