#include <stdio.h>

int main(){
	
	int N,i,j,divisores,contador=0;
	
	printf("Dame hasta que n%cmero quieres saber cuales son numeros primos: ",163);
	scanf("%i",&N);
	int primos[N];
	
	printf("Los numeros primos del 1 hasta el %i son:",N);
	for(i=2; i<=N ; i++){
		divisores = 0;
		for(j=1 ; j<=i ; j++){
			
			if(i%j == 0){
				divisores++;
			}
		}
		if(divisores == 2){
			primos[contador]=i;
			contador++;
		}
		
	}
	for(i=0; i<contador ;i++){
		printf(" %d",primos[i]);
	}
	printf("\nHay %d numeros primos",contador);	
	return 0;
}
