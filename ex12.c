#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* createPrefix(int n, const char* s) {
    int len = strlen(s);
    if (n > len)
        n = len;
 
    char* prefix = (char*)malloc((n + 1) * sizeof(char));
    if (prefix == NULL)
        return NULL;
 
    strncpy(prefix, s, n);
    prefix[n] = '\0';
 
    return prefix;
}
 
int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Ler o newline após o número de casos de teste
    int i;
    for (i = 0; i < N; i++) {
        int n;
        char s[500];
 
        scanf("%d", &n);
        getchar(); // Ler o espaço após o número
 
        fgets(s, 500, stdin);
        s[strcspn(s, "\n")] = '\0'; // Remover o newline lido por fgets
 
        char* prefix = createPrefix(n, s);
 
        if (prefix != NULL) {
            printf("%s\n", prefix);
            free(prefix);
        }
    }
 
    return 0;
}