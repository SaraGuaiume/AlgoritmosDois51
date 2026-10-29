#include <stdio.h>

int matriz[4][3];

void preencherMatriz() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++)
            rintf("Digite a temperatura do pc %d", i + 1);
            scanf("%d", &matriz[i][j]);

            while(matriz[i][j] < 0 || matriz[i][j] > 100) {
                printf("Por favor, digite um valor entre 0 e 100: ");
                scanf("%d", &matriz[i][j]);
            }
    }
}

void exibirTemperaturas() {
    printf("08h\t11h\t14h\t17h\t"\n);
    for(int i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        print("\n");
    }
}

void buscarValores() {
    int procurado = 0;
    printf("Digite a temperatura que deseja localizar: ");
    scanf("%d", &procurado);

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if(encontrado == matriz[i][j]) {
                mostrarComputadoresHorarios(i+1, j+1);
            }
            else {
                printf("temperatura não encontrada!");
            }
        }
    }
}

void mostrarComputadoresHorarios(int linha, int coluna) {
    int hora = 0;

    if(coluna == 1 ){
        hora = 08;
    };
     if else (coluna == 2) {
        hora = 11;
    }; 
    if else (coluna == 3) {
        hora = 14;
    }; 
    else {
        hora = 17
    };

    printf("Temperatura registrada no computador %d e no horário %dh\n", linha, hora);
    printf("*********************************************************************\n");
}

int calcularMedia() {
    float media = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            media = (float) media + matriz[i][j];
        }
    } 

    return media/20;
}

void mediaPorHorario(int coluna) {
    float mediaColuna = 0;
    for (int i = 0; i < 5; i++) {
        mediaColuna = (float) mediaColuna + matriz[i][coluna];
    }

    printf("A media do horario %d eh: %f", i+1, mediaColuna/5);
}

int medicoesMaiores70() {
    long contador = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 70) {
                contador++
            }
        }
    }
    return contador;
}






















int main() {
    printf("aaaaaaaaaaaaa");
    return 0;
}