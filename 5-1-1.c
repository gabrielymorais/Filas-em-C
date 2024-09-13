#include <stdio.h>

#define TAMANHO 10  

int f[TAMANHO];  
int indiceInicio = 0;  
int indiceFinal = -1; 


int filaVazia() {
    return indiceInicio > indiceFinal;
}


int filaCheia() {
    return indiceFinal == TAMANHO - 1;
}


void inserirFila(int y) {
    if (filaCheia()) {
        printf("Erro: Fila cheia!\n");
        return;
    }
    f[++indiceFinal] = y;  
    printf("Elemento %d inserido na fila!\n", y);
}


int removerFila() {
    if (filaVazia()) {
        printf("Erro: Fila vazia!\n");
        return -1;
    }
    return f[indiceInicio++];  
}

int main() {
    inserirFila(10);  
    inserirFila(20);  
    inserirFila(30);  

    printf("Removido: %d\n", removerFila()); 
    printf("Removido: %d\n", removerFila());  

    inserirFila(40);

    printf("Removido: %d\n", removerFila());  


    return 0;
}
