#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho, linhas, colunas;
    int ** matriz;

    printf("Informe o tamanho da ordem da matriz quadrada:");
    scanf("%d", &tamanho);
    linhas = colunas = tamanho;

    matriz = (int **) malloc (linhas * sizeof(int*)); 
    if(matriz==NULL){exit(1);}
    for (int linha = 0; linha < linhas; linha++)
    {
        matriz[linha] = (int*) malloc (colunas * sizeof(int));
        if(matriz==NULL){exit(1);}
    }
    
    for (int linha = 0; linha < linhas; linha++)
    {
        for (int coluna = 0; coluna < colunas; coluna++)
        {
            matriz[linha][coluna] = rand()%101;
        }
        
    }
    
    for (int linha = 0; linha < linhas; linha++)
    {
        for (int coluna = 0; coluna < colunas; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
