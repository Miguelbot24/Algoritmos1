#include <stdio.h>

void calculadora(float A , float B);

int main(){
	int opc;
	float num1, num2;
	int numeros_ingresados = 0;
	
	do{
		printf("\nBienvenido\n");
		printf("1. Ingresar numeros a operar\n");
		printf("2. Realizar algun calculo\n");
		printf("3. Primer mensaje motivador\n");
		printf("4. Segundo mensaje motivador\n");
		printf("0. Salir\n");
		printf("Seleccione una opcion: ");
		scanf("%i",&opc);
		
		switch(opc){
		case 1:
			
			printf("\nDame dos numeros enteros\n");
			printf("Primer numero: ");
			scanf("%f",&num1);
			printf("Segundo numero: ");
			scanf("%f",&num2);
			printf("\n");
			numeros_ingresados = 1;
            printf("Numeros guardados correctamente.\n");
			break;
		case 2:
			if (numeros_ingresados == 1) {
                calculadora(num1, num2);
            } else {
                printf("\nError: Primero debe ingresar los numeros con la opcion 1.\n");
            }
			break;
		case 3:
			printf("\nGracias a dios que existe la IA, aprende YA!\n");
			break;
		case 4:
			printf("\nSi lo puedes imaginar, lo puedes programar!\n");
			break;
		case 0:
			printf("\nGracias, vuelva pronto!\n");
			opc=0;
			break;
		default:
			printf("\nEntregue algun valor valido\n");
	}		
	}while(opc!=0);
	
	return 0;
}

void calculadora(float A , float B){
	char N;
	float resultado;
	printf("\nQue operacion quieres realizar (+ , - , * , /): ");
	scanf(" %c",&N);
	switch(N){
		case '+':
			resultado = A + B;
			printf("La suma es: %f",resultado);
			break;
		case '-':
			resultado = A - B;
			printf("La resta es: %f",resultado);
			break;
		case '*':
			resultado = A * B;
			printf("La multiplicacion es: %f",resultado);
			break;
		case '/':
			resultado = A / B;
			printf("La division es: %.3f",resultado);
			break;
		default:
			printf("Entregue algun valor valido");
	}
}
