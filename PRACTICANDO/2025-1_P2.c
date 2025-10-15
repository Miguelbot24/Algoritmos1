#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SusIniciales1(int arreglo[],int tam);
void SusIniciales2(int arreglo[],int tam);
	
int main(){
	
	
	srand(time(NULL));
	
	int N,i;
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
