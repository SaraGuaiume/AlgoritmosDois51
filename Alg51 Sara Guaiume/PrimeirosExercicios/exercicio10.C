// DEZ - Leia dois vetores, A e B, contendo 10 números inteiros cada. Crie um terceiro vetor C, no qual cada posição seja a soma dos elementos correspondentes de A e B. Exemplo: C[0] = A[0] + B[0].
#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];
int vetorValoresDois[tamanhoVetor];
int vetorSomaPosicoes[tamanhoVetor];

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i ++) {
        printf("Digite o valor %d do primeiro vetor: ", i+1);
        scanf("%d", &vetorValores[i]);
    }

        for (int i = 0; i < tamanhoVetor; i ++) {
        printf("Digite o valor %d do segundo vetor: ", i+1);
        scanf("%d", &vetorValoresDois[i]);
    }
}

void somarVetores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorSomaPosicoes[i] = vetorValores[i] + vetorValoresDois[i];
        printf("%d, ", vetorSomaPosicoes[i]);
    }

}

int main() {
    armazenarValores();
    somarVetores();
}