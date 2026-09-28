//ONZE - Leia 10 números inteiros para um vetor. Depois, mostre primeiro todos os números pares e, em seguida, todos os números ímpares.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

void valoresPares() {
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] % 2 == 0) {
            printf("%d, ", vetorValores[i]);
        }
    }    
    printf("\n");
}

void valoresImpares() {
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] % 2 == 1) {
            printf("%d, ", vetorValores[i]);
        }
    }    
}

int main() {
    armazenarValores();
    valoresPares();
    valoresImpares();
}