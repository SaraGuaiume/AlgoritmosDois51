//SEIS - Leia tamanhoVetor números inteiros. Informe o menor valor encontrado e a posição em que ele aparece no vetor.

#include <stdio.h>

const int tamanhoVetor = 10;

void armazenarValores(int vetorValores[tamanhoVetor]) {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetorValores[i]);
    
    }
}

float encontrarMenor(int vetorValores[tamanhoVetor], int menor) {
    int index = 0;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetorValores[i] < menor) { 
            menor = vetorValores[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int valores[tamanhoVetor];
    armazenarValores(valores);
    int menor = valores[0];
    
    int posicao = encontrarMenor(valores, menor);
    menor = valores[posicao];
    printf("O menor valor eh %d. Ele ocupa a posicao %d", menor, posicao);
    
    

}
