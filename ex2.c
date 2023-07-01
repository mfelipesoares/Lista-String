#include <stdio.h>
#include <stdlib.h>
 
void new_vetor(int * vetor, int size){
    int i;
    for(i=0; i<size; i++) scanf("%d", &vetor[i]);
}
 
int compare(const void *a, const void *b){
    if(*(int*) a == *(int*)b){ return 0;}
    else if(*(int*) a < *(int*) b){ return -1;}
    else {
        return 1;
    }
}
 
void maior(int * vetor, int size, int K){
    int i, contador=0;
    for(i=0; i<size; i++){
        if(vetor[i] >= K){
            contador++;
        }
    }
    printf("%d\n", contador);
}
 
int main(){
    int N, K;
    int * vetor;
    do
    {
        scanf("%d",&N);
    } while (N > 1000 || N < 1);
    vetor = malloc(N * sizeof(int));
    new_vetor(vetor, N);
    qsort(vetor, N, sizeof(int), compare);
    scanf("%d", &K);
    maior(vetor, N, K);
    return 0;
}