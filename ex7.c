#include <stdio.h>
 
int main() {
    int N;
 
    while (scanf("%d", &N) == 1 && N != 0) {
        int vetor[N];
        int i, M = 0;
 
        // Leitura dos elementos do vetor
        for (i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
 
            if (vetor[i] > M)
                M = vetor[i];
        }
 
        int frequencia[M + 1];
 
        // Inicialização do vetor de frequências
        for (i = 0; i <= M; i++) {
            frequencia[i] = 0;
        }
 
        // Cálculo das frequências
        for (i = 0; i < N; i++) {
            frequencia[vetor[i]]++;
        }
 
        // Impressão das frequências
        for (i = 0; i <= M; i++) {
            int contador = 0;
            int j;
 
            for (j = 0; j <= M; j++) {
                if (j <= i)
                    contador += frequencia[j];
            }
 
            printf("(%d) %d\n", i, contador);
        }
 
        printf("\n");
    }
 
    return 0;
}