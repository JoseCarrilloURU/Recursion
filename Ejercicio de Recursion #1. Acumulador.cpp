#include <stdio.h>

/*
Ejercicio de Recursion #1. Jose Carrillo
Acumulador de numeros desde el 0 hasta el 10 (o el numero que se prefiera)
*/

void Acumulador();
int n;

int main(){

Acumulador();

return 0;		
}

void Acumulador(){

printf ("%d\n", n);
n++;
if (n<=10)
Acumulador();	
	
}
