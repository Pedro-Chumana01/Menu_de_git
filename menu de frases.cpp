#include <stdio.h>
#include <math.h>
#include <string.h>

double calcularPotencia(double base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * calcularPotencia(base, exponente - 1);
    }
}

void convertirAMayusculas(char cadena[]) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] -= 32;
        }
    }
}

void convertirAMinusculas(char cadena[]) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++) {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            cadena[i] += 32;
        }
    }
}

void dividirYRestar() {
    int dividendo, divisor;
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    printf("Resultados:\n");
    while (divisor >= 1) {
        printf("%d / %d = %.2lf\n", dividendo, divisor, (double)dividendo / divisor);
        divisor--;
    }
}

void mostrarMayusculasYVocales() {
    char frase[100];
    printf("Ingrese una frase: ");
    scanf(" %99[^\n]", frase);  // Lee hasta 99 caracteres, excluding newline

    printf("Las letras son: ");
    int longitud = strlen(frase);
    for (int i = 0; i < longitud; i++) {
        char c = frase[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            printf("%c ", c);
        }
    }
    printf("\nVocales: ");
    for (int i = 0; i < longitud; i++) {
        char c = frase[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c ", c);
        }
    }
    printf("\nLa frase es: %s\n", frase);
}

int main() {
    int opcion;

    do {
        printf("Menú de opciones:\n");
        printf("1. Realizar potencia\n");
        printf("2. Convertir frase a mayúsculas\n");
        printf("3. Convertir frase a minúsculas\n");
        printf("4. Dividir y restar\n");
        printf("5. Mostrar letras y vocales\n");
        printf("0. Salir\n");
        printf("Ingrese su elección: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                double base;
                int exponente;
                printf("Ingrese la base: ");
                scanf("%lf", &base);
                printf("Ingrese el exponente: ");
                scanf("%d", &exponente);
                double resultado = calcularPotencia(base, exponente);
                printf("Resultado: %.2lf\n", resultado);
                break;
            }
            case 2: {
                char cadena[100];
                printf("Ingrese una frase: ");
                scanf(" %99[^\n]", cadena);
                convertirAMayusculas(cadena);
                printf("Frase en mayúsculas: %s\n", cadena);
                break;
            }
            case 3: {
                char cadena[100];
                printf("Ingrese una frase: ");
                scanf(" %99[^\n]", cadena);
                convertirAMinusculas(cadena);
                printf("Frase en minúsculas: %s\n", cadena);
                break;
            }
            case 4:
                dividirYRestar();
                break;
            case 5:
                mostrarMayusculasYVocales();
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }

    } while (opcion != 0);

    return 0;
}





