# Programacion en C
## Objetivo
Con esto voy a poner todo lo que aprenda algoritmos mediante el lenguaje C.
## Algoritmo
Es un metodo para resolver un problema.Preciso, Definido y Finito.
Tiene tres partes, Entrada, Proceso y Salida. 
## Lenguaje de Programacion
Un lenguaje de programacion es lenguaje formal diseñado para realizar procesos que pueden ser llevados a cabo por maquinas. 
Lenguaje maquina(0,1).
Lengusje de Bajo nivel(ensamblador).
Lenguaje de Alto nivel. 
## Lenguaje en C
"#include<stdio.h>" es una libreria en C.
return 0 no es olbigatirio pero es una buena practica, le estas indicando a esta todo bien.
El int main es la funcion principal.
printf("aca va a aparecer lo que va a mostrar la pantalla")
; siempre hay que usarlo despues de cada instruccion
Para poner un salto de linea tenes que poner \n dentro del printf. Ejemplo printf("zzz\n");.
Los comentarios son con "//"
## Directivas del preprocesador
el stdio.h sirve para imprimir cosas por pantalla y que para que le usuario nos digite cualquier cosa. Es la cabecera.
include son las librerias. las macros es con #define
## Variable
Es una posicion de memoria, le vamos a asignar un dato.
Ejemplo;  suma = 0; 
printf("la suma es : %i",suma) Se le pone %i porque este va a tomar el valor de suma. Pero a. ser % y una i es porque es entero.
En vez de int se usa float para numero decimales. En vez de %i se pone %f. Para que no salga tanto decimales, se tiene que poner %.2f(Redondea el numero)
### Variable local
Se pone lo siguente-> int x = 10; en el int main, dentro de una funcion. Solo funciona dentro de ella. 
### Variable Global
Se pone defuera del int main y eso lo toma todas las funciones.
## Tipos de datos
char: de tipo caracter. Ejemplo char a = 'e', y en el printf se pone %c.(0 a 255).
short: para numeros negativos. (-127 al 127).
unsigned int(o a 65535).
long: rango muy extenso.
float:decimales.
double:decimales de rango extenso
Para pedirle al usuario una variable, se pusa el scanf, ejemplo: scanf("%i",&a).
Cuando se pide un nombre por ejepmplo, se usa char[cantidad de digitos], y no es necesario en el scanf poner el &. Pero lee hasta un espacio.
gets es para toda una oracion.
