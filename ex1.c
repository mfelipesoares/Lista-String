#include <stdio.h>
 
void verificarNumeros(int * vetor, int tamanho, int * numeros, int quantidade) {
    int i,j;
    for (i = 0; i < quantidade; i++) {
        int encontrado = 0;
        for (j = 0; j < tamanho; j++) {
            if (numeros[i] == vetor[j]) {
                encontrado = 1;
                break;
            }
        }
 
        if (encontrado){
            printf("ACHEI\n");
        }
        else{
            printf("NAO ACHEI\n");
        }
    }
}
void new_vetor(int * vetor, int N){
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
}
 
int main() {
    int N, M;
    int vetor[100000];
    int numeros[1000];
    scanf("%d", &N);
    new_vetor(vetor, N);
    scanf("%d", &M);
    new_vetor(numeros, M);
    verificarNumeros(vetor, N, numeros, M);
 
    return 0;
}