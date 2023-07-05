#include <stdio.h>
#include <stdlib.h>

int main(void){

    int tamanho;
    printf("Informe o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int * vetor = (int*) malloc(tamanho * sizeof(int*));
    if(vetor==NULL){
        printf(" Memory allocation error!");
        exit(1);
    }
    
    //Recebe elementos inseridos pelo user
    printf("Informe os valores para o seu vetor de tamanho %i\n", tamanho );
    for (int index = 0; index < tamanho; index++){
        scanf("%d", &vetor[index]);
    }
    //Imprime os elementos em ordem inversa
    for (int index = 0; index > tamanho; index--){
        printf("%i\n", vetor[index]);
    }

    free(vetor);
    return 0;
}