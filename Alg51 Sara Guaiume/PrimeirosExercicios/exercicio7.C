// SETE - Leia tamanVetor números inteiros e armazene-os em um vetor. Ao final, informe quantos números são pares e quantos são ímpares.

#include <stdio.h>

 void armazenarValores(int vetorValores[tamaVetor]) {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetorValores[i]);
    }
   
}

int classificarParImpar(int vetorValores[tamanhoVetor], int contarPares) {
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] % 2 == 0) {
            contarPares = contarPares + 1;
        } 
    }
    return contarPares;
}

int main() {
    int tamanhoVetor = tamanVetor;
    int vetor[tamanhVetor];
    int contarPares = 0;
    int qtdPares = 0;
    int qtdImpares = 0;

    armazenarValores(vetor);
    qtdPares = classificarParImpar(vetor, contarPares);
    qtdImpares = tamanhoVetor - qtdPares;
    printf("A quantidade de numeros pares e impares eh %d e %d, respactivamente", qtdPares, qtdImpares);

}