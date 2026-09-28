// TREZE - Leia 10 números inteiros. Substitua todos os valores negativos armazenados no vetor pelo número 0. Ao final, apresente o vetor modificado.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

void substituirValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] < 0) {
            vetorValores[i] = 0;
        }
        printf("%d, ", vetorValores[i]);
    }    
}

int main() {
    armazenarValores();
    substituirValores();
}