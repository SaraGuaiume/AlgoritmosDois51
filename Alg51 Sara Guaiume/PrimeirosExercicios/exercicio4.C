// QUATRO - Leia as notas de 10 alunos e armazene-as em um vetor. Calcule e apresente a média da turma. Depois, mostre quais notas são maiores ou iguais à média.

#include <stdio.h>


void armazenarValores(float vetorNotas[10]) {
    
    for (int i = 0; i < 10; i ++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &vetorNotas[i]);
    }
}

float calcularMedia(float notas[10]) {
    float media = 0;
    for (int i = 0; i < 10; i ++) {
        media = media + notas[i];
    }

    return media/10;
};

void classificarNotas (float notas[10], float media) {
    for (int i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            printf("\nA nota %d esta acima ou na media", i);
        }
    }
}


int main() {
    float notasTurma[10];
    float mediaTurma;

    armazenarValores(notasTurma);
    mediaTurma = calcularMedia(notasTurma);
    classificarNotas(notasTurma, mediaTurma);
    printf("A media da turma é: %f", mediaTurma);
    return 0;

}
