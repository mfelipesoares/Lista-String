#include <stdio.h>
#include <stdlib.h>
 
void intercalar(int *V1, int q1, int *V2, int q2) {
    int *Vr = malloc((q1 + q2) * sizeof(int));
 
    int i = 0, j = 0, k = 0;
 
    while (i < q1 && j < q2) {
        if (V1[i] < V2[j]) {
            Vr[k++] = V1[i++];
        } else {
            Vr[k++] = V2[j++];
        }
    }
 
    while (i < q1) {
        Vr[k++] = V1[i++];
    }
 
    while (j < q2) {
        Vr[k++] = V2[j++];
    }
 
    for (i = 0; i < q1 + q2; i++) {
        printf("%d\n", Vr[i]);
    }
 
    free(Vr);
}
 
int main() {
    int q1, q2,i;
 
    scanf("%d %d", &q1, &q2);
 
    int *V1 = malloc(q1 * sizeof(int));
    int *V2 = malloc(q2 * sizeof(int));
 
    for (i = 0; i < q1; i++) {
        scanf("%d", &V1[i]);
    }
 
    for (i = 0; i < q2; i++) {
        scanf("%d", &V2[i]);
    }
 
    intercalar(V1, q1, V2, q2);
 
    free(V1);
    free(V2);
 
    return 0;
}