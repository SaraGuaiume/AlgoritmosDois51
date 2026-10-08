#include <stdio.h>
#include <stdlib.h>

int qtdSensores = 0;

struct sensores {
    int codigo;
    float temperatura;
};

struct sensores *sensor;

void solicitarQtdSensores() {
    printf("Quantos sensores voce utilizara? ");
    scanf("%d", &qtdSensores);
}

void armazenarTemperaturas() {
    sensor = malloc(qtdSensores * sizeof(struct sensores));
    
    if(sensor == NULL) {
        printf("erro na alocacao");
    }

    for (int i =0; i < qtdSensores; i++){
        printf("Digite o codigo %d: ", i+1);
        scanf("%d", sensor[i].codigo);

        printf("Digite a temperatura %d: ", i+1);
        sacnf("%f", sensor[i].temperatura);

    }
}

void mostrarTemperaturas() {
    for (int i = 0; i < qtdSensores; i++) {
        printf("temperatura %d = %f\n", i+1, sensor[i].temperatura);
    }
}

float calcularMedia() {
    float media = 0;

    for (int i = 0; i < qtdSensores; i++) {
        media = media + sensor[i].temperatura;
    }    
    return media / qtdSensores;
}

float apresentarMaiorTemperatura() {
    float maior = sensor[1].temperatura;
    for (int i = 0; i < qtdSensores; i++) {
        if (maior < sensor[i].temperatura) {
            maior = sensor[i].temperatura;
        }
    }

    return maior;
}

float apresentarMenorTemperatura() {
    float menor = sensor[1].temperatura;
    for (int i = 0; i < qtdSensores; i++) {
        if (menor > sensor[i].temperatura) {
            menor = sensor[i].temperatura;
        }
    }

    return menor;
}

void adcionarSensores() {
    char resposta;
    int qtdNovos = 0;
    int qtdTotal = 0;

    printf("Voce deseja adcionar novos sensores? S/N");
    scanf("%c", &resposta);

    if (resposta == "s" || resposta == "S") {
        printf("Quantos sensores vc planeja adcionar? ");
        scanf("%d", &qtdNovos);

        qtdTotal = qtdNovos + qtdSensores;

        struct sensores *totalSensores = realloc(
            sensor, //para saber oq ja tem e arrumar mais espaco de memoria
            (qtdTotal * sizeof(struct sensores)); // pra saber quanto tem q adc
        );

        if (totalSensores == NULL) {
            printf("Erro na realocacao!\n");
            return;
        }

        sensor = totalSensores;

        for (int i = qtdSensores; i < qtdTotal; i++) {
            printf("Digite o codigo do sensor %d: ", i + 1);
            scanf("%d", &sensor[i].codigo);

            printf("Digite a temperatura do sensor %d: ", i + 1);
            scanf("%f", &sensor[i].temperatura);
        }

        qtdSensores = qtdTotal;
    }

    else if (resposta == "n" || resposta == "N") {
        printf("ok!");
    }
}

void liberarMemoria() {
    free(sensor);
    sensor = NULL;
}

int main() {
    solicitarQtdSensores();
    armazenarTemperaturas();
    mostrarTemperaturas();
    float mediaTemperaturas = calcularMedia();
    float maiorTemperatura = apresentarMaiorTemperatura();
    float menorTemperatura = apresentarMenorTemperatura();
    printf("media: %f", mediaTemperaturas);
    printf("maior temperatura: %f", maiorTemperatura);
    printf("menor temperatura: %f", menorTemperatura);
    adcionarSensores();
    mostrarTemperaturas();
    liberarMemoria();
}