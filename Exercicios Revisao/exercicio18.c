#include <stdio.h>

struct Sensores
{
    int codigo;
    float temperatura;
    char ativo;
};

struct Sensores sensor[5];

int vetorCriticos[5];

void adicionarSensores()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o codigo do sensor %d: ", i+1);
        scanf("%d", &sensor[i].codigo);

        printf("Digite a temperatura do sensor %d: ", i+1);
        scanf("%f", &sensor[i].temperatura);

        printf("O sensor esta ativo? (S/N)- sensor %d: ", i+1);
        scanf(" %c" , &sensor[i].ativo);
    }
}

void lerDados()
{
    for (int i = 0; i < 5; i++)
    {
        printf("CODIGO : %d\n", sensor[i].codigo);
        printf("TEMPERATURA : %f\n", sensor[i].temperatura);
        printf("FUNCIONANDO? %c\n", sensor[i].ativo);
        printf("-\n-----------------------------------------------------");
    }
}

void verificarSensorCritico()
{
    for (int i = 0; i < 5; i++)
    {
        if (sensor[i].temperatura > 30)
        {
            if (sensor[i].ativo == 'S' || sensor[i].ativo == 's')
            {
                vetorCriticos[i] = 1;
            }
        }
        else
        {
            vetorCriticos[i] = 0;
        }
    }
}

void apresentarDadosCriticos()
{

    for (int i = 0; i < 5; i++)
    {
        if (vetorCriticos[i] == 1)
        {
            printf("CODIGO : %d\n", sensor[i].codigo);
            printf("TEMPERATURA : %f\n", sensor[i].temperatura);
            printf("\n------------------------------------------------------");
        }
    }
}

int contarSensoresCriticos()
{
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        if (vetorCriticos[i] == 1)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    adicionarSensores();
    lerDados();
    verificarSensorCritico();
    apresentarDadosCriticos();
    int qtdCriticos = contarSensoresCriticos();
    printf("\n%d eh a quantidade de sensores criticos", qtdCriticos);

    return 0;
}