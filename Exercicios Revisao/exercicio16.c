// QUESTAO 16

#include <stdio.h>

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void exibirSituacao(float mediaAluno)
{
    if (mediaAluno >= 6 && mediaAluno <= 10)
    {
        printf("aprovado!!!!");
    }
    else if (mediaAluno < 6 && mediaAluno >= 0)
    {
        printf("reprovado!!!");
    }
    else
    {
        printf("Media invalida!!!");
    }
}

int main()
{
    float nota1;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;

    printf("Digite nota 1: ");
    scanf("%f", &nota1);

    printf("Digite nota 2: ");
    scanf("%f", &nota2);

    printf("Digite nota 3: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1, nota2, nota3);
    exibirSituacao(media);

    return 0;
}

// pq uma precisa retornar o valor da media, para que possamos passar a media como parametro na funcao exibirSituacao. Ja exibirSituacao pode ser void pq nao precisa retornar um valor, como o proprio nome diz "exibir".

// QUESTAO 17

//  A saida completa será:
// 8, 6
// 10, 3

// a variavel global eh total = 10
// as variaveis locais sao total = 5. valor e numero = 3
// A variável global total não é modificada porque existe uma variável local chamada total dentro da função atualiza. Portanto, as operações realizadas em total modificam apenas a variável local, mantendo a variável global com o valor original de 10.

#include <stdio.h>
int total = 10;
void atualizar(int *valor)
{
    int total = 5;
    total = total + *valor;
    *valor = *valor * 2;
    printf("A: %d %d\n", total, *valor);
}
int main()
{
    int numero = 3;
    atualizar(&numero);  // com & pra passar a referencia do numero
    printf("B: %d %d\n", total, numero);
    return 0;
}