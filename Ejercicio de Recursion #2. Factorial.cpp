#include <stdio.h>

/*
Ejercicio de Recursion #2. Jose Carrillo
Calculo del Factorial de cualquier numero deseado
*/

int Factorial(int a);
int r;

int main(){

Factorial(4);
printf ("El factorial de 4 es de: %d", r);

Factorial(5);
printf ("\nEl factorial de 5 es de: %d", r);

Factorial(6);
printf ("\nEl factorial de 6 es de: %d", r);

return 0;		
}

int Factorial(int a){

if (a!=0){
r = a * Factorial(a-1);	

return r;
}else
return 1;

}
