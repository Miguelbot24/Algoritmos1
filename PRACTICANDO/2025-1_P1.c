#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main(){
	
	int N;
	printf("\nIngrese un n%cmero: ",163);
    scanf("%d", &N);
    
	srand(time(NULL));
	
	float SUM = 0;
	int t,m=0;
	float vector1[N];
	float vector2[N];
	int contador=0;
	
	for(t=0; t<=N ;t++){
		
		vector1[t] = 10 + rand() % (100 - 10);
		printf("%.0f ",vector1[t]);
		SUM = SUM + vector1[t];
		
	}
	
	float PROM = SUM / N;
	printf("\nEl promedio es: %lf\n",PROM);
	
	for(t=0; t<N ;t++){
		
		if(vector1[t] > PROM){
			vector2[m] = vector1[t];
			m++;
			contador++;
		}
	}
	printf("La cantidad de numeros que son mayores al promedio son: %d\n",contador);
	printf("Los numeros que son mayores al promedio es: ");
	for(t=0; t<contador ;t++){
	
	printf("%.0f ", vector2[t]);
	}
return 0;
}
	
	
