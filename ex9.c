#include <stdio.h>
#include <stdlib.h>
 
 
 
int main(){
    int N;
    scanf("%d",&N);
    int *vetor;
    vetor = (int*) malloc(N*sizeof(int));
    int i, ultimo=0, maior=0;
    for(i=0; i<N; i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<N; i++){
        if(vetor[i] == vetor[N-1]) ultimo++;
    }
    for(i=0; i<N; i++){
        if(vetor[i] > vetor[maior]) maior = i; 
    }
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", vetor[N-1], ultimo, vetor[maior], maior);
}