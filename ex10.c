#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int N;
    scanf("%d%*c",&N);
    int *vetor;
    vetor = (int*)malloc(N*sizeof(int));
    int i;
    for(i=0; i<N; i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<N; i++){
        if(i == N-1){
            printf("%d",vetor[i]);
        }else{
            printf("%d ",vetor[i]);
        }
    }
    printf("\n");
    for(i = N - 1; i >= 0; i--){
        if(i == 0){
            printf("%d",vetor[i]);
        }else{
            printf("%d ",vetor[i]);
        }
    }
    printf("\n");
    int maior, menor;
    maior = vetor[0];
    menor = vetor[0];
    for(i=1; i < N; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }    
    for(i=1; i < N; i++){
        if(vetor[i] < menor) menor = vetor[i];
    }    
    printf("%d\n%d\n", maior, menor);
    return 0;
}