#include <stdio.h>

char convertirMayuscula(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - 'a' + 'A';
    } else {
        return letra;
    }
}

char convertirMinuscula(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return letra - 'A' + 'a';
    } else {
        return letra;
    }
}

void imprimirAlternado(char caracter, int alternador) {
    char mayuscula = convertirMayuscula(caracter);
    char minuscula = convertirMinuscula(caracter);

    if (alternador == 0) {
        printf("Original: %c | Convertida a mayuscula: %c\n", caracter, mayuscula);
    } else {
        printf("Original: %c | Convertida a minuscula: %c\n", caracter, minuscula);
    }
}

int main() {
    printf("Digite una frase: ");

    char caracter;
    int alternador = 0; // 0 para mayúscula, 1 para minúscula
    
    while ((caracter = getchar()) != '\n') {
        imprimirAlternado(caracter, alternador);
        alternador = 1 - alternador; // Cambiar entre 0 y 1
    }

    return 0;
}

