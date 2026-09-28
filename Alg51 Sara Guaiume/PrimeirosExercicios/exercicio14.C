// QUATORZE - Leia 10 números inteiros e determine o maior e o menor valor armazenados. Em seguida, apresente a diferença entre o maior e o menor.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];
int maiorValor = 0;
int menorValor = 0;

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

int classificarMaiorValor() {
    maiorValor = vetorValores[0];

    for (int i = 0; i < tamanhoVetor; i++) {
        if (maiorValor < vetorValores[i]) {
            maiorValor = vetorValores[i];
        }
    }   
    return maiorValor; 
}

int classificarMenorValor() {
    menorValor = vetorValores[0];
    
    for (int i = 0; i < tamanhoVetor; i++) {
        if (menorValor > vetorValores[i]) {
            menorValor = vetorValores[i];
        }
    }   
    return menorValor; 
}

int main() {
    armazenarValores();
    int menor = classificarMenorValor();
    int maior = classificarMaiorValor();
    printf("O maior valor eh %d e o menor eh %d", maior, menor);
}