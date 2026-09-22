// CINCO - Leia 10 números inteiros e determine qual é o maior valor armazenado no vetor.
#include <stdio.h>

void armazenarValores(float vetorValores[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Entre com o valor %d: ", i);
        scanf("%f", &vetorValores[i]);
    }
}

float classificarMaior(float vetorValores[10], float maior) {
    for (int i = 0; i < 10; i++) {
        if (vetorValores[i] > maior) {
            maior = vetorValores[i];
        }
    }
    return maior;
}

int main() {
    float valores[10];
    float maior;
    float valorMaior;

    armazenarValores(valores);
    maior = valores[1];
    valorMaior = classificarMaior(valores, maior);
    printf("O maior valor encontrado foi: %f", valorMaior);
}