//DOZE - Leia 10 números inteiros e armazene-os em um vetor. Depois, solicite ao usuário um número para pesquisa. Informe quantas vezes esse número aparece no vetor.

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];
int valorBuscado = 0;

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
    printf("Digite um número: ");
    scanf("%d", &valorBuscado);
}

int buscarValor() {
    int qtdEncontrada = 0;

    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] == valorBuscado) {
            qtdEncontrada = qtdEncontrada + 1;
        }
    }
    return qtdEncontrada;
}



int main() {
    armazenarValores();
   int quantidadeNumero = buscarValor();
   printf("O número aparece %d no vetor", quantidadeNumero);
}