#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores;
    int *novo;

    valores = malloc(5 * sizeof(int));
    if (valores == NULL) 
    {
        return -1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        valores[i] = i + 1;
    }
    
    novo = realloc(valores, 8 * sizeof(int));

    if (novo == NULL) 
    {
        free(valores);
        return -1;
    }

    valores = novo;


    for (int i = 5; i < 8; i++)
    {
        valores[i] = i + 1;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", valores[i]);
    }


    free(valores);
    valores = NULL;

    return 0;
}

// questao 20
// a) Identifique dois problemas ou riscos relacionados às operações de alocação e redimensionamento.
// o primeiro erro ocorro ao nao verificar se o vetor valores e novo foram alocados corretamente, isso pode causar erros ao acessar a memoria
// b) Explique o que poderá acontecer se realloc retornar NULL e a instrução valores = novo; for executada.
// valores tambem ir valer NULL, ou seja, ele perderq onde estao armazenados os dados que ja tinham sido adicionados
// e) Explique a diferença entre malloc e realloc quanto à finalidade de cada uma dessas funções.
// Malloc inicia um bloco de memoria com um tamanho definido, permitindo armazenar quantidade estabelecida. ja a funcao realloc eh usada para redimensionar um bloco de memoria que ja foi alocado, ele preserva os dados ja existentes