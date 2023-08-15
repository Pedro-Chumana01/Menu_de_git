#include <stdio.h>
#include <conio.h> // Biblioteca específica de Windows
#include <windows.h> // Para Sleep() en Windows

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    printf("\033[H\033[J"); // Código ANSI para limpiar la pantalla en sistemas no-Windows
#endif
}

void moveTextUpDown(int *posY, int *direction) {
    *posY += *direction;

    if (*posY <= 0 || *posY >= 20) {
        *direction *= -1;
    }
}

void printTextAtPosition(int posY) {
    for (int i = 0; i < posY; i++) {
        printf("\n");
    }
    printf("Hola, mundo!\n");
}

int main() {
    int posY = 0;
    int direction = 1;

    while (!_kbhit()) {
        clearScreen();
        moveTextUpDown(&posY, &direction);
        printTextAtPosition(posY);
        Sleep(100); // Pausa en milisegundos para el efecto visual
    }

    return 0;
}

