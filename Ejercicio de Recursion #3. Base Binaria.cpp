#include <stdio.h>
#include <string.h>

/*
Ejercicio de Recursion #3. Jose Carrillo
Transformar un valor de base decimal a base binaria
*/

int n;
int ConversionBinaria(int a);

int main(){

do{
	
printf ("Ingrese un valor entero: ");
scanf ("%d", &n);	
printf ("\n");
	
}while (n<0);

printf ("Su valor en base binaria es de: ");
ConversionBinaria(n);

return 0;	
}

int ConversionBinaria(int a){
	
if (a<=1)
printf ("%d", a);
else{
ConversionBinaria(a/2);
printf ("%d", a%2);
}

	
}
