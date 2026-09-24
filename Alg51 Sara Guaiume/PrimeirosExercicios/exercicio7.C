// SETE - Leia 15 números inteiros e armazene-os em um vetor. Ao final, informe quantos números são pares e quantos são ímpares.

#include <stdio.h>

 void armazenarValores(int vetorValores[15]) {
    for (int i = 0; i < 15; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetorValores[i]);
    }
   
}

int classificarParImpar(int vetorValores[15], int contarPares) {
    for (int i = 0; i < 15; i++) {
        if (vetorValores[i] % 2 == 0) {
            contarPares = contarPares + 1;
        } 
    }
    return contarPares;
}

int main() {
    int vetor[15];
    int contarPares = 0;
    int qtdPares = 0;
    int qtdImpares = 0;

    armazenarValores(vetor);
    qtdPares = classificarParImpar(vetor, contarPares);
    qtdImpares = 15 - qtdPares;
    printf("A quantidade de numeros pares e impares eh %d, %d, respactivamente", qtdPares, qtdImpares);

}