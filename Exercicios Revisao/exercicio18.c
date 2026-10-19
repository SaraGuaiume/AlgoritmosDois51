#include <stdio.h>

struct Sensores
{
    int codigo;
    float temperatura;
    char estadoFuncionamento[6];
}

struct Sensores sensor[5];

void adicionarSensores()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o código do sensor: ");
        scanf("%d", &sensor[i].codigo);
        printf("Digite a temperatura do sensor: ");
        scanf("%f", &sensor[i].temperatura);
        printf("Digite o estado de funcionamento do sensor (ativo/inativo): ");
        scanf("%5s", &sensor[i].codigo);
    }
}

void lerDados()
{
    for (int i = 0; i < 5; i++)
    {
        printf("CODIGO : %d\n", sensor[i].codigo);
        printf("TEMPERATURA : %f\n", sensor[i].temperatura);
        printf("ESTADO DE FUNCIONAMENTO : %5s\n", sensor[i].estadoFuncionamento);
    }
}

void apresentarDadosCriticos()
{
    for (int i = 0; i < 5; i++)
    {
        if (sensor[i].temperatura > 30)
        {
            if (sensor[i].estadoFuncionamento == "ativo" || sensor[i].estadoFuncionamento == "ATIVO")
            {
        printf("CODIGO : %d\n", sensor[i].codigo);
        printf("TEMPERATURA : %f\n", sensor[i].temperatura);
            }
        }
    }
}

int contarSensoresCriticos()
{
    int contador = 0;
    for (int i = 0; i < 5; i++)
    {
        if (sensor[i].temperatura > 30)
        {
            if (sensor[i].estadoFuncionamento == "ativo" || sensor[i].estadoFuncionamento == "ATIVO")
            {
                contador++;
                return contador;


            }
        }
    }
}

int main()
{
    adicionarSensores();
    lerDados();
    apresentarDadosCriticos();
    int qtdCriticos = contarSensoresCriticos();
    printf("%d", qtdCriticos);
}