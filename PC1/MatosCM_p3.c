#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	
	srand(time(NULL));
	int temp, hum;
	
	char mensaje1[] = "Nevado";
	char mensaje2[] = "Frio y húmedo";
	char mensaje3[] = "Frio seco";
	char mensaje4[] = "Fresco con niebla";
	char mensaje5[] = "Nevado";
	char mensaje6[] = "Nevado";
	char mensaje7[] = "Nevado";
	
	printf("Presentamos el reportaje del clima en Lima\n");
	temp = rand() % 100;
	hum = rand() % 100;
	printf("La temperatura hoy es de %i%cC\n",temp,167);
	
	//printf("Nevado\n", temp <= 9);

	printf("\nEl clima de hoy ser%c: %i ",160, temp);
	
	return 0;
}
