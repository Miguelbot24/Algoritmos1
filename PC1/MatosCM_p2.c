#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Pregunta 2
	//Generar aleatoriamente dos simbolos del codigo ASCII
	srand(time(NULL));
	int num1 = rand() % 100;
	int num2 = num1 - 1;
	printf("Primer n%cmero aleatorio: %i\n",163,num1);
	printf("Segundo n%cmero aleatorio: %i\n\n",163,num2);
	
	
	return 0;
}
