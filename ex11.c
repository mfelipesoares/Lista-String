#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
 
double calculateMedian(int *data, int size) {
    if (size % 2 != 0) {
        return data[size / 2];
    } else {
        int midIndex = size / 2;
        return (data[midIndex - 1] + data[midIndex]) / 2.0;
    }
}
 
int main() {
    int N;
    scanf("%d", &N);
    int i;
    int *data = malloc(N * sizeof(int));
    for (i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }
 
    qsort(data, N, sizeof(int), compare);
 
    double median = calculateMedian(data, N);
    printf("%.2lf\n", median);
 
    free(data);
 
    return 0;
}