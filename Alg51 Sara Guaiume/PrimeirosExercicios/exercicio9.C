//NOVE - Leia 10 números inteiros para um vetor. Solicite também um número inteiro ao usuário. Crie um segundo vetor contendo cada elemento do primeiro vetor multiplicado pelo número informado. Apresente o novo vetor.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];
int numeroInteiro = 0;
int vetorMultiplicado[tamanhoVetor];

void armazenarValores() {
    printf("Digite um valor: ");
    scanf("%d", &numeroInteiro);

    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

void multiplicarVetor() {
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorMultiplicado[i] = vetorValores[i] * numeroInteiro;
        printf("%d, ", vetorMultiplicado[i]);
    }
}

int main() {
    armazenarValores();
    multiplicarVetor();
}