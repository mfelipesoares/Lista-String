#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int N, K;
    int i;
    scanf("%d %d", &N, &K);
 
    int *alunos;
    alunos = (int *) malloc(N * sizeof(int));
    int presentes = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &alunos[i]);
        if (alunos[i] <= 0) {
            presentes++;
        }
    }
 
    if (presentes < K) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
        for (i = N - 1; i >= 0; i--) {
            if (alunos[i] <= 0) {
                printf("%d\n", i + 1);
            }
        }
        printf("\n");
    }
    free(alunos);
    return 0;
}