//SEIS - Leia 10 números inteiros. Informe o menor valor encontrado e a posição em que ele aparece no vetor.

#include <stdio.h>

void armazenarValores(float vetorValores[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &vetorValores[i]);
    
    }
}

float encontrarMenor(float vetorValores[10], float menor) {
    int index = 0;
    for (int i = 0; i < 10; i++) {
        if (vetorValores[i] < menor) { 
            index = i;
        }
    }
    return index;
}

int main() {
    float valores[10];
    float menor = 0;
    int posicao = 0;

    armazenarValores(valores);
    
    menor = valores[0];
    posicao = encontrarMenor(valores, menor);

    menor = valores[posicao];

    printf("O menor valor eh %f. Ele ocupa a posicao %d", menor, posicao);
    
    

}
