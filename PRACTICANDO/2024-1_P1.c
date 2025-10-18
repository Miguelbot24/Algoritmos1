#include <stdio.h>
#include <stdlib.h> // Para las funciones rand() y srand()
#include <time.h>   // Para la función time()

int main() {
    // 1. Inicializar el generador de números aleatorios
    srand(time(NULL));

    // 2. Generar un número aleatorio de dos dígitos (entre 10 y 99)
    // rand() % 90 genera un número de 0 a 89. Al sumarle 10, el rango es de 10 a 99.
    int numero_secreto = rand() % 90 + 10;
    int i;
    int intento_usuario;
    int intentos_maximos = 5;
    int gano_el_juego = 0; // Bandera: 0 = no ha ganado, 1 = sí ganó

    printf("--- Bienvenido al juego Adivina el Numero ---\n");
    printf("He generado un numero aleatorio de dos digitos (entre 10 y 99).\n");
    printf("Tienes %d intentos para adivinarlo.\n\n", intentos_maximos);

    // 3. Bucle principal del juego que se repite 5 veces
    for (i = 1; i <= intentos_maximos; i++) {
        printf("Intento #%d: Ingresa tu numero: ", i);
        scanf("%d", &intento_usuario);

        // 4. Comprobar si el usuario adivinó el número
        if (intento_usuario == numero_secreto) {
            printf("\n¡Felicitaciones! ¡Has adivinado el numero!\n");
            gano_el_juego = 1; // Cambiamos la bandera para indicar que ganó
            break;             // Rompemos el bucle porque el juego terminó
        } else {
            // Si el número es incorrecto, damos una pista
            if (intento_usuario < numero_secreto) {
                printf("Incorrecto. El numero a descubrir es MAYOR.\n");
            } else { // El intento del usuario es mayor
                printf("Incorrecto. El numero a descubrir es MENOR.\n");
            }
            
            // Informar de los intentos restantes, solo si no es el último intento
            if (i < intentos_maximos) {
                 printf("Te quedan %d intentos.\n\n", intentos_maximos - i);
            }
        }
    }

    // 5. Al salir del bucle, verificar si el jugador no ganó
    if (gano_el_juego == 0) {
        printf("\nLo siento, se te acabaron los 5 intentos.\n");
        printf("El numero secreto era: %d\n", numero_secreto);
    }

    return 0;
}
