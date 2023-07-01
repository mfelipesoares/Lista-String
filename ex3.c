#include <stdio.h>
#include <stdlib.h>
 
void new_vetor(int * vetor, int size){
    int i;
    for(i=0; i<size; i++) scanf("%d", &vetor[i]);
}
 
void print_vetor(int * vetor, int N){
    int i = N - 1;
    for(; i >=0; i--){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}
 
int main(){
    int N;
    int * vetor;
    do
    {
        scanf("%d",&N);
    } while (N > 5000 || N < 1);
    vetor = malloc(N * sizeof(int));
    new_vetor(vetor, N);
    print_vetor(vetor, N);
    return 0;
}