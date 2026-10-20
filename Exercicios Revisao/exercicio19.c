#include <stdio.h>
#include <stdlib.h>

int n = 0;
float *vetor;

void lerNumero() {
    printf("Digite a quantidade de medicoes: ");
    scanf("%d", &n);
}

int alocarVetor() {
     vetor = malloc(n * sizeof(float));

     if (vetor == NULL) {
        printf("erro na alocacao");
     }
}

void lerMedicoes() {
    for (int i = 0; i < n; i++) {
        printf("digite a medicao %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

float calcularMaior() {
    float maior = *vetor;
    for (int i = 0; i < n; i++) {
        if (maior < vetor[i]) {
            maior = vetor[i];
        }
    }
    return maior;
}

void liberarMemoria() {
    free(vetor);
    vetor = NULL;
}

int main() {
    lerNumero();
    alocarVetor();
    lerMedicoes();
    float maiorValor = calcularMaior();
    printf("O maior valor armazenado eh: %.2f", maiorValor);
    liberarMemoria();
}

