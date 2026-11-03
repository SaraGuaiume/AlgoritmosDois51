#include <stdio.h>

typedef struct
{
    int dados[CAPACIDADE];
    int tamanho;
} Lista;

void inicializarLista(Lista *lista)
{
    lista->tamanho = 0;
}

void apresentarLista(Lista *lista)
{
    if (lista->tamanho == 0)
    {
        printf("Lista vazia");
    }
    else
    {
        for (int i = 0; i < Lista->tamanho; i++)
        {
            printf("%f", lista[i]->dados)
        }
    }
}

void inserirLista(Lista *lista, int elemento)
{
    if (lista->tamanho < CAPACIDADE)
    {
        lista->dados[lista->tamanho] = elemento;
        lista->tamanho++;
    }
    else
    {
        printf("lista cheia");
    }
}

int consultarLista(Lista *lista, valor) {
    for(int i = 0)
}

int main()
{
    int elemento;
    Lista lista;
    inicializarLista(&lista);
    apresentarLista(&lista);

    do
    {
        printf("Digite um elemento ou -1");
        scanf("%d", elemento);

    } while (lista->tamanho < CAPACIDADE || elemento != -1)
    {
        inserirLista(&lista, 5);
    }
    return 0;
}
