//NOVE - Leia 10 números inteiros para um vetor. Solicite também um número inteiro ao usuário. Crie um segundo vetor contendo cada elemento do primeiro vetor multiplicado pelo número informado. Apresente o novo vetor.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores;
int numeroInteiro;
int vetorMultiplicado;

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &vetorValores);
    }
}

void MultiplicarVetor() {
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorMultiplicado[i] = vetorValores[i] * numeroInteiro;
        printf("%d", vetorMultiplicado[i]);
    }
}

int main() {
    armazenarValores
}