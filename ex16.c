#include <stdio.h>
#include <stdlib.h>
 
void unico(int * vetor, int N){
    int contador = 0;
    int i,k;
    // Percorre o vetor
    for (i = 0; i < N; i++) {
        for(k=1; k < N; k++){
            if(vetor[i] == vetor[k]){
                break;
            }
        }
        if(i == k){
            contador++;
        }
    }
    contador /= 2;
    printf("%d\n", contador);
}
 
 
void new_vetor(int *vetor, int N){
    int i;
    for(i=0; i<N; i++) scanf("%d", &vetor[i]);
}
 
 
int main(){
    int N;
    scanf("%d",&N);
    int *vetor;
    vetor = (int*)malloc(N*sizeof(int));
 
    //cria vetor:
    new_vetor(vetor, N);
 
 
    //verifica qtd de unicos:
    unico(vetor, N);
 
 
 
    free(vetor);
    return 0;
}