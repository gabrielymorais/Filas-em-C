#include <stdio.h>

#define TAM 100  

int fila[TAM];   
int comeco = 0;  
int fim = 0;   

void enfileirar(int elemento) {
    if (fim == TAM) {
        printf("Fila cheia!\n");
        return;
    }
    fila[fim++] = elemento;
    printf("Elemento %d enfileirado!\n", elemento);
}

void desenfileirar() {
    if (comeco == fim) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Elemento %d retirado!\n", fila[comeco++]);
}

void imprimirFila() {
    if (comeco == fim) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    for (int i = comeco; i < fim; i++) {
        printf("%d ", fila[i]);
    }
    printf("\n");
}

int main() {
    enfileirar(10);
    enfileirar(20);
    enfileirar(30);

    imprimirFila();

    desenfileirar();
    imprimirFila();

    return 0;
}
