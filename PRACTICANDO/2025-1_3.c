#include <stdio.h>
#include <math.h> // Para la funci�n fabs() (valor absoluto)

// Prototipos de las funciones
double calcularArea(int x1, int y1, int x2, int y2, int x3, int y3);
void imprimirGrid(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
    int x1, y1, x2, y2, x3, y3; // V�rtices del tri�ngulo
    int px, py;                   // Punto a evaluar

    // Solicitar coordenadas de los v�rtices
    printf("Ingrese coordenadas del primer vertice (x y): ");
    scanf("%d %d", &x1, &y1);
    printf("Ingrese coordenadas del segundo vertice (x y): ");
    scanf("%d %d", &x2, &y2);
    printf("Ingrese coordenadas del tercer vertice (x y): ");
    scanf("%d %d", &x3, &y3);

    // Solicitar coordenadas del punto a evaluar
    printf("Ingrese coordenadas del punto a evaluar (x y): ");
    scanf("%d %d", &px, &py);

    // --- L�gica para determinar si el punto est� dentro o fuera ---

    // 1. Calcular el �rea del tri�ngulo principal
    double areaTotal = calcularArea(x1, y1, x2, y2, x3, y3);

    // 2. Calcular las �reas de los tres subtri�ngulos con el punto P
    double area1 = calcularArea(px, py, x2, y2, x3, y3);
    double area2 = calcularArea(x1, y1, px, py, x3, y3);
    double area3 = calcularArea(x1, y1, x2, y2, px, py);
    
    // 3. Comparar la suma de las �reas.
    // Usamos una peque�a tolerancia (epsilon) para la comparaci�n de doubles.
    if (fabs((area1 + area2 + area3) - areaTotal) < 0.0001) {
        printf("\nEl punto esta DENTRO del triangulo.\n");
    } else {
        printf("\nEl punto esta FUERA del triangulo.\n");
    }
    
    // --- Impresi�n del eje de coordenadas ---
    printf("Eje de coordenadas de 20x20:\n");
    imprimirGrid(x1, y1, x2, y2, x3, y3);

    return 0;
}

/**
 * @brief Calcula el �rea de un tri�ngulo a partir de sus tres v�rtices.
 * @return El �rea calculada como un double.
 */
double calcularArea(int x1, int y1, int x2, int y2, int x3, int y3) {
    // A = 0.5 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
    double area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return fabs(area); // fabs para valor absoluto de un double
}

/**
 * @brief Imprime un grid de 20x20 representando el tri�ngulo.
 * '1' para puntos dentro o en el borde, '0' para puntos fuera.
 */
void imprimirGrid(int x1, int y1, int x2, int y2, int x3, int y3) {
    double areaTrianguloPrincipal = calcularArea(x1, y1, x2, y2, x3, y3);
	int y,x;
    // Bucle para las filas (coordenada y), de arriba hacia abajo (19 a 0)
    for ( y = 19; y >= 0; y--) {
        // Bucle para las columnas (coordenada x), de izquierda a derecha (0 a 19)
        for ( x = 0; x <= 19; x++) {
            // Para cada punto (x, y) del grid, hacemos la prueba
            double a1 = calcularArea(x, y, x2, y2, x3, y3);
            double a2 = calcularArea(x1, y1, x, y, x3, y3);
            double a3 = calcularArea(x1, y1, x2, y2, x, y);

            if (fabs((a1 + a2 + a3) - areaTrianguloPrincipal) < 0.0001) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // Salto de l�nea al final de cada fila
    }
}
