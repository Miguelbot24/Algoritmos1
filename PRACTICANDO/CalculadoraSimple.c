#include <stdio.h>
/*
Vamos a crear un programa que funcione como una calculadora básica. El programa le pedirá al usuario que ingrese dos números y un operador (+, -, *, /).
Usando switch case, realizarás la operación correspondiente.

Objetivos
Pedir al usuario dos números enteros.

Pedir al usuario un operador (char).

Usar un switch para decidir qué operación realizar basándose en el operador.

Mostrar el resultado.

Manejar el caso de que el operador no sea válido usando default.
*/

int main(){
	int num1, num2;
	int sum, res, mul, div;
	char N;
	
	
	printf("Dame dos numeros enteros\n");
	printf("Primer numero: ");
	scanf("%i",&num1);
	printf("\n");
	printf("Segundo numero: ");
	scanf("%i",&num2);
	printf("\n");
	printf("Que operacion quieres realizar (+ , - , * , /): ");
	scanf(" %c",&N);
	
	switch(N){
		case '+':
			sum = num1 + num2;
			printf("La suma es: %i",sum);
			break;
		case '-':
			res = num1 - num2;
			printf("La resta es: %i",res);
			break;
		case '*':
			mul = num1 * num2;
			printf("La multiplicacion es: %i",mul);
			break;
		case '/':
			div = num1 / num2;
			printf("La division es: %i",div);
			break;
		default:
			printf("Entregue algun valor valido");
	}
	return 0;
}
