#include <stdio.h>

double potencia(double base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else if (exponente > 0) {
        return base * potencia(base, exponente - 1);
    } else {
        return 1.0 / (base * potencia(base, -exponente - 1));
    }
}

int main() {
    double base;
    int exponente;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    double resultado = potencia(base, exponente);
    printf("El resultado de %.2lf elevado a %d es: %.2lf\n", base, exponente, resultado);

    return 0;
}

