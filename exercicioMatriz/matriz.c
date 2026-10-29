#include <stdio.h>

int matriz[5][4];
int matrizAlertas[5][4];

void preencherMatriz() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite a temperatura do pc %d: ", i + 1);
            scanf("%d", &matriz[i][j]);

            while(matriz[i][j] < 0 || matriz[i][j] > 100) {
                printf("Por favor, digite um valor entre 0 e 100: ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
}

void exibirTemperaturas() {
    printf("Comp\t08h\t11h\t14h\t17h\t\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int converterHorarios(int colunaIndice) {
    int hora = 0;

    if (colunaIndice <= 4) {

        if(colunaIndice == 1 ){
            hora = 8;
        }
        else if (colunaIndice == 2) {
            hora = 11;
        }
        else if (colunaIndice == 3) {
            hora = 14;
        } 
        else {
            hora = 17;
        }
    
        return hora;

    } else {
        if(colunaIndice == 8) {
            hora = 0;
        }
         else if (colunaIndice == 11) {
            hora = 1;
        }
         else if (colunaIndice == 14) {
            hora = 2;
        }
         else if (colunaIndice == 17) {
            hora = 3;
        }
        return hora;
    }
}

void mostrarComputadoresEHorarios(int linha, int coluna) {
    int horario = converterHorarios(coluna);

    printf("Temperatura registrada no computador %d as %dh\n", linha, horario);
    printf("*********************************************************************\n");
}

void buscarValores() {
    int procurado = 0;
    int encontrou = 0;
    printf("Digite a temperatura que deseja localizar: ");
    scanf("%d", &procurado);

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if(procurado == matriz[i][j]) {
                mostrarComputadoresEHorarios(i+1, j+1);
                encontrou++;
            }
        }
    }
    if (encontrou == 0) {
        printf("Valor nao encontrado");
    }
}




float calcularMedia() {
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
        printf("A media do horario %d eh: %f\n", i+1, mediaColuna/5);
        printf("***************************************************")
    }   

}

int medicoesMaiores70() {
    long contador = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 70) {
                contador++;
            }
        }
    }
    return contador;
}

void atualizarTemperatura() {
    int linha = 0;
    int horario = 0;
    int novoValor = 0;
    printf("Digite o numero do computador: ");
    scanf("%d", &linha);

    while (linha < 1 || linha > 5) {
        printf("Por favor, digite um valor válido!");
        scanf("%d", &linha);        
    }

    printf("Digite o horario da medicao (apenas numeros): ");
    scanf("%d", &horario);

    printf("Digite o novo valor de temperatura: ");
    scanf("%d", &novoValor);

    int coluna = converterHorarios(horario);

    matriz[linha-1][coluna] = novoValor;

};

void criarMatrizAlertas() {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 70) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }
  
}

void exibirAlertas() {
    printf("Comp\t08h\t11h\t14h\t17h\t\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrizAlertas[i][j]);
        }
        printf("\n");
    }
}

void detectarSuperAquecimento() {
    long contador = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 70) {
                contador++;
            }
        }
    }
    return contador;    
}



int main() {
    preencherMatriz();

    exibirTemperaturas();

    buscarValores();

    printf("Media geral: %.2f\n", calcularMedia());

    mediaPorHorario(0);

    printf("Medicoes maiores que 70: %d\n", medicoesMaiores70());

    atualizarTemperatura();

    exibirTemperaturas();
    return 0;
}