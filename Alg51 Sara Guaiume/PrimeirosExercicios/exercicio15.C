//QUINZE - Leia 10 números inteiros. Depois, utilizando laços for, apresente cada valor apenas uma vez, mesmo que ele tenha sido digitado várias vezes

#include <stdio.h>

#define tamanhoVetor 10

int vetorValores[tamanhoVetor];

void armazenarValores() {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorValores[i]);
    }
}

void mostrarValoresUmaVez() {
    for (int i = 0; i < tamanhoVetor; i++) {
        for (int j = 0; j <= tamanhoVetor; j++) {
            if (vetorValores[i] == vetorValores[j]) {
                if (i != j) {
                    vetorValores[j] = 0;
                }  
            }
        }
        if (vetorValores[i] != 0) {
            printf("%d, ", vetorValores[i]);
        }
    }    
}

int main() {
    armazenarValores();
    mostrarValoresUmaVez();
}