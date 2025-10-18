#include <stdio.h>
#include <math.h> // Se puede usar para la optimizaci�n de la ra�z cuadrada

// Prototipo de la funci�n que verifica si un n�mero es primo
int esPrimo(int n);

int main() {
    int a, b, c;
    int suma;

    // Arreglo para marcar los n�meros ya impresos y evitar duplicados.
    // Tama�o 1000 para cubrir todos los n�meros de 3 cifras (�ndices 0-999).
    int ya_impreso[1000] = {0}; // Inicializado a 0 (falso)

    printf("Numeros primos de tres cifras que son suma de tres cuadrados:\n");

    // Los bucles van hasta 31 porque 32*32 = 1024, que ya es mayor que 999.
    for (a = 1; a <= 31; a++) {
        for (b = 1; b <= 31; b++) {
            for (c = 1; c <= 31; c++) {
                // 1. Calcula la suma de los cuadrados
                suma = (a * a) + (b * b) + (c * c);

                // 2. Verifica si la suma es un n�mero de tres cifras
                if (suma >= 100 && suma <= 999) {
                    
                    // 3. Verifica si es primo Y si no ha sido impreso antes
                    if (esPrimo(suma) && ya_impreso[suma] == 0) {
                        
                        printf("%3.d^2 + %3.d^2 + %3.d^2 es: ",a,b,c);
                        printf("%d\n", suma);
                        
                        // 5. Marca el n�mero como ya impreso
                        ya_impreso[suma] = 1;
                    }
                }
            }
        }
    }

    return 0;
}

/**
 * Funci�n para verificar si un n�mero es primo.
 * Devuelve 1 si es primo, 0 si no lo es.
 */
int esPrimo(int n) {
    // Los n�meros menores o iguales a 1 no son primos
    if (n <= 1) {
        return 0;
    }
	int i;
    // Se comprueba la divisibilidad desde 2 hasta la ra�z cuadrada de n.
    // Es una optimizaci�n para no recorrer todos los n�meros hasta n.
    for ( i = 2; i * i <= n; i++) {
        // Si n es divisible por cualquier n�mero en este rango, no es primo.
        if (n % i == 0) {
            return 0;
        }
    }

    // Si el bucle termina sin encontrar divisores, el n�mero es primo.
    return 1;
}
