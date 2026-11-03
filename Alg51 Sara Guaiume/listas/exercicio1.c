#include <stdio.h>

#define CAPACIDADE 20
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
        for (int i = 0; i < lista->tamanho; i++)
        {
            printf("%d", lista->dados[i]);
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

int consultarLista(Lista *lista, int valor) {
    printf("digite um valor");
    scanf("%d", &valor);
    for(int i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i] == valor) {
            return i;
        }
    }
    return -1;
}

void alterarLista(Lista *lista, int valor, int novoValor)
{
    int posicao = consultarLista(lista, valor);

    if (posicao == -1)
    {
        printf("Elemento nao encontrado!\n");
    }
    else
    {
        lista->dados[posicao] = novoValor;
        printf("Elemento alterado com sucesso!\n");
    }
}

int main()
{
    int elemento;
    int valor;
    int novoValor;

    Lista lista;

    inicializarLista(&lista);

    do
    {
        printf("Digite um elemento ou -1: ");
        scanf("%d", &elemento);

        if (elemento != -1)
        {
            inserirLista(&lista, elemento);
        }

    } while (lista.tamanho < CAPACIDADE && elemento != -1);

    apresentarLista(&lista);

    printf("\nDigite um valor para consultar: ");
    scanf("%d", &valor);

    int posicao = consultarLista(&lista, valor);

    if (posicao == -1)
    {
        printf("Nao encontrado\n");
    }
    else
    {
        printf("O valor foi encontrado na posicao %d\n", posicao);
    }

    printf("\nDigite o valor que deseja alterar: ");
    scanf("%d", &valor);

    printf("Digite o novo valor: ");
    scanf("%d", &novoValor);

    alterarLista(&lista, valor, novoValor);

    apresentarLista(&lista);

    return 0;
}
