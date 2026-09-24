//OITO - Leia 10 números reais. Mostre todos os números positivos armazenados e informe a quantidade de números negativos.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

int contarNumerosNegativos() {
    int qtdNegativos = 0;

    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] < 0) {
            qtdNegativos = qtdNegativos + 1;
        }
    }
    return qtdNegativos;
}

void mostrarNumerosPositivos() {
    printf("Valores: \n");
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] > 0) {
            printf("%d, ", vetorValores[i]);
        }
    }
}

main() {
    
    int numerosNegativos = 0;

    armazenarValores();
    numerosNegativos = contarNumerosNegativos();
    mostrarNumerosPositivos();

    printf("\nTemos %d numeros negativos", numerosNegativos);
}