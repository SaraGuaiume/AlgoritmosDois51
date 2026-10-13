#include <stdio.h>
#include <stdlib.h>

int qtdSensores = 0;

struct sensores {
    int codigo;
    float temperatura;
};

struct sensores *sensor;

void alocarSensores() {

    sensor = malloc(qtdSensores * sizeof(struct sensores));
    
    if(sensor == NULL) {
        printf("erro na alocacao");
    }
}

int solicitarQtdSensores() {
    printf("Quantos sensores voce utilizara? ");
    scanf("%d", &qtdSensores);
    return qtdSensores;
}

void armazenarInformacoes(int inicio) {

    for (int i = inicio; i < qtdSensores; i++){
        printf("Digite o codigo %d: ", i+1);
        scanf("%d", &sensor[i].codigo);

        printf("Digite a temperatura %d: ", i+1);
        scanf("%f", &sensor[i].temperatura);
    }
}

void mostrarTemperaturas() {
    for (int i = 0; i < qtdSensores; i++) {
        printf("temperatura %d = %.2f\n", i+1, sensor[i].temperatura);
    }
}

float calcularMedia() {
    float media = 0;

    for (int i = 0; i < qtdSensores; i++) {
        media = media + sensor[i].temperatura;
    }    
    return media / qtdSensores;
}

void calcularMaiorMenorTemperatura() {
    float maior = sensor[0].temperatura;
    float menor = sensor[0].temperatura;

    for (int i = 1; i < qtdSensores; i++) {

        if (sensor[i].temperatura > maior) {
            maior = sensor[i].temperatura;
        }

        if (sensor[i].temperatura < menor) {
            menor = sensor[i].temperatura;
        }
    }
    printf("%.2f eh o maior valor\n", maior);
    printf("%.2f eh o menor valor\n", menor );
}

void adicionarSensores() {
    char resposta;
    int qtdNovos = 0;
    int qtdTotal = 0;
    int qtdAntiga = qtdSensores;
    float mediaTemperaturas = 0;

    printf("Voce deseja adcionar novos sensores? (S/N): ");
    scanf(" %c", &resposta);
    while (resposta != 'S' && resposta != 's' && resposta != 'n' && resposta != 'N') {
        printf("Por favor, digite uma resposta válida! (S/N): ");
        scanf(" %c", &resposta);        
    }

    if (resposta == 's' || resposta == 'S') {
        qtdNovos = solicitarQtdSensores();

        qtdTotal = qtdNovos + qtdAntiga;

        struct sensores *totalSensores = realloc(
            sensor, //para saber oq ja tem e arrumar mais espaco de memoria
            qtdTotal * sizeof(struct sensores) // pra saber quanto tem q adc
        );

        if (totalSensores == NULL) {
            printf("Erro na realocacao!\n");
            return;
        }
        
        sensor = totalSensores;
        qtdSensores = qtdTotal;
        armazenarInformacoes(qtdAntiga);

        mostrarTemperaturas();
        mediaTemperaturas = calcularMedia();
        printf("media: %.2f\n", mediaTemperaturas);
        calcularMaiorMenorTemperatura();
    }

    else if (resposta == 'n' || resposta == 'N') {
        printf("ok!");
    } 
}

void liberarMemoria() {
    free(sensor);
    sensor = NULL;
}

int main() {
    alocarSensores();
    solicitarQtdSensores();
    armazenarInformacoes(0);
    mostrarTemperaturas();
    float mediaTemperaturas = calcularMedia();
    calcularMaiorMenorTemperatura();
    printf("media: %.2f\n", mediaTemperaturas);
    adicionarSensores();
    liberarMemoria();

    return 0;
}