#include <stdio.h>


float calcularMedia(float t1, float t2, float t3) {
    return (t1 + t2 + t3) / 3.0;
}

void classificarDesempenho(float media) { // void eh pra quando nao retorna valor
    if (media < 50) {
        printf("Desempenho excelente\n");
    }
    else if (media <= 100) {
        printf("Desempenho satisfatorio\n");
    }
    else {
        printf("Desempenho insatisfatorio\n");
    }
}

float receberTempos(char* tempo) { // pra escrever mais de um caractere
    float tempinho;
       
    printf("Digite o tempo %s: ", tempo);
    scanf("%f", &tempinho); //dois argumentos, o tipo de dado e dps o dado

    return tempinho;
}

int main() {
    float media, tempo1, tempo2, tempo3;
    

    tempo1 = receberTempos("um");
    tempo2 = receberTempos("dois");
    tempo3 = receberTempos("tres");

    media = calcularMedia(tempo1, tempo2, tempo3);

    printf("\nTempo medio: %.2f ms\n", media); //%.2f variavel media aparece aqui, ela eh do tipo float com 2 casas decimais
    classificarDesempenho(media);

    return 0;
}
// ./hello pra executar
// gcc .\HELLO.C -o hello pra compilar o codigo, sempre que alterar o codigo, precisa executar este comando
// dir eh pra ver o diretorio e os arquivos 
// mkdir pra criar uma pasta 
// rmdir remove uma pasta 
// mv move/renomeia arquivos ou pastas
// cd pra entrar
// ls pra sair