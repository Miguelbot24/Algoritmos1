#include <stdio.h>
#include <math.h> // Se puede usar para la optimización de la raíz cuadrada

// Prototipo de la función que verifica si un número es primo
int esPrimo(int n);

int main() {
    int a, b, c;
    int suma;

    // Arreglo para marcar los números ya impresos y evitar duplicados.
    // Tamaño 1000 para cubrir todos los números de 3 cifras (índices 0-999).
    int ya_impreso[1000] = {0}; // Inicializado a 0 (falso)

    printf("Numeros primos de tres cifras que son suma de tres cuadrados:\n");

    // Los bucles van hasta 31 porque 32*32 = 1024, que ya es mayor que 999.
    for (a = 1; a <= 31; a++) {
        for (b = 1; b <= 31; b++) {
            for (c = 1; c <= 31; c++) {
                // 1. Calcula la suma de los cuadrados
                suma = (a * a) + (b * b) + (c * c);

                // 2. Verifica si la suma es un número de tres cifras
                if (suma >= 100 && suma <= 999) {
                    
                    // 3. Verifica si es primo Y si no ha sido impreso antes
                    if (esPrimo(suma) && ya_impreso[suma] == 0) {
                        
                        printf("%3.d^2 + %3.d^2 + %3.d^2 es: ",a,b,c);
                        printf("%d\n", suma);
                        
                        // 5. Marca el número como ya impreso
                        ya_impreso[suma] = 1;
                    }
                }
            }
        }
    }

    return 0;
}

/**
 * Función para verificar si un número es primo.
 * Devuelve 1 si es primo, 0 si no lo es.
 */
int esPrimo(int n) {
    // Los números menores o iguales a 1 no son primos
    if (n <= 1) {
        return 0;
    }
	int i;
    // Se comprueba la divisibilidad desde 2 hasta la raíz cuadrada de n.
    // Es una optimización para no recorrer todos los números hasta n.
    for ( i = 2; i * i <= n; i++) {
        // Si n es divisible por cualquier número en este rango, no es primo.
        if (n % i == 0) {
            return 0;
        }
    }

    // Si el bucle termina sin encontrar divisores, el número es primo.
    return 1;
}
