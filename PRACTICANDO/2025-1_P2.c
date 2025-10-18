#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SusIniciales1(int arreglo[],int tam);
void SusIniciales2(int arreglo[],int tam);
	
int main(){
	
	
	srand(time(NULL));
	
	int N,i,k;
	printf("\nIngrese un n%cmero: ",163);
    scanf("%d", &N);
    
    int A[N];
	int B[N];
	
	SusIniciales1(A,N);
	SusIniciales1(B,N);
	
	printf("Arreglo A = ");
	SusIniciales2(A,N);
	printf("\n");
	printf("Arreglo B = ");
	SusIniciales2(B,N);
	
	printf("\nLos numeros que estan en ambos arreglos y sus respectivas posiciones son:\n");

    // Bucle principal: recorre todos los números posibles de 0 a 20
    for (k = 0; k <= 20; k++) {
        int encontradoEnA = 0;
        int encontradoEnB = 0;

        // Paso 1: Verificar si k existe en A
        for (i = 0; i < N; i++) {
            if (A[i] == k) {
                encontradoEnA = 1; // Marcamos que lo encontramos
                break;            // Salimos del bucle para no buscar más
            }
        }

        // Paso 2: Verificar si k existe en B
        for (i = 0; i < N; i++) {
            if (B[i] == k) {
                encontradoEnB = 1; // Marcamos que lo encontramos
                break;            // Salimos del bucle
            }
        }

        // Paso 3: Si se encontró en ambos, imprimir sus posiciones
        if (encontradoEnA && encontradoEnB) {
            printf("%d\t A: ", k);

            // Bucle para imprimir todas las posiciones en A
            int primerIndice = 1; // Bandera para manejar las comas
            for (i = 0; i < N; i++) {
                if (A[i] == k) {
                    if (!primerIndice) {
                        printf(", "); // Pone la coma antes del siguiente número
                    }
                    printf("%d", i);
                    primerIndice = 0;
                }
            }
            
            printf("\t B: ");

            // Bucle para imprimir todas las posiciones en B
            primerIndice = 1; // Reiniciamos la bandera para B
            for (i = 0; i < N; i++) {
                if (B[i] == k) {
                    if (!primerIndice) {
                        printf(", ");
                    }
                    printf("%d", i);
                    primerIndice = 0;
                }
            }
            printf("\n"); // Salto de línea para el siguiente número en común
        }
    }
    
	return 0;
}

void SusIniciales1(int arreglo[],int tam){
	int i;
	for(i=0;i<tam;i++){
	arreglo[i]= rand() % 21;
	}
}

void SusIniciales2(int arreglo[],int tam){
	int i;
	printf("[ ");
	for(i=0;i<tam;i++){
		if(0<=arreglo[i] && arreglo[i]<10){
    	printf("0");
    	printf("%d ",arreglo[i]);
	}else{
		printf("%d ",arreglo[i]);
	}
	}
	printf("]");
	
		
}
