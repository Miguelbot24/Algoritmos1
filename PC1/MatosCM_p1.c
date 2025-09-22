#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Pregunta 1
	//Generar aleatoriamente dos simbolos del codigo ASCII
	srand(time(NULL));
	int primer_simbolo = rand() % 254 + 1;
	int segundo_simbolo = primer_simbolo - 1;
	
	
	printf("Primer s%cmbolo aleatorio: %c\n",161,primer_simbolo);
	printf("Segundo s%cmbolo aleatorio: %c\n\n",161,primer_simbolo);
	
	//Otra interpretacion
	printf("Cuadrito de 2x2\n");
	printf("%c%c\n",segundo_simbolo,primer_simbolo);
	printf("%c%c\n\n",primer_simbolo,segundo_simbolo);
	
	//Dibujar un tablero de ajedrez
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",176,176,219,219,176,176,219,219,176,176,219,219,176,176,219,219);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,176,176,219,219,176,176,219,219,176,176,219,219,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",176,176,219,219,176,176,219,219,176,176,219,219,176,176,219,219);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,176,176,219,219,176,176,219,219,176,176,219,219,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",176,176,219,219,176,176,219,219,176,176,219,219,176,176,219,219);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,176,176,219,219,176,176,219,219,176,176,219,219,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",176,176,219,219,176,176,219,219,176,176,219,219,176,176,219,219);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,176,176,219,219,176,176,219,219,176,176,219,219,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",176,176,219,219,176,176,219,219,176,176,219,219,176,176,219,219);
	return 0;
}
