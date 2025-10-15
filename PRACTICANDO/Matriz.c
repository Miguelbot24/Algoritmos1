#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int i,j,f,c;
	
	printf("\nLlenando la matriz...\n");
	printf("Dame el n%cmero de filas: \n",163);
	scanf("%i",&f);
	printf("Dame el n%cmero de columnas: \n",163);
	scanf("%i",&c);
	
	int contador = 1;
	int matriz1[f][c];
	
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			matriz1[i][j] = contador;
			contador++;
		}	
	}
	printf("\nImprimiendo la matriz:\n");
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("%4.d", matriz1[i][j]);
		}
	printf("\n");
		
	}
	
	return 0;
}
