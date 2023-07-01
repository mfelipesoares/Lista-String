#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int n;
    char *palavra = (char *) malloc(sizeof(char) * 5);
    
    scanf("%d ", &n);
    
    while (n--) {
        
        int erros = 0;
        int indice = 0;
        int resposta = 1;
        int tamanho = 0;
        
        scanf("%s", palavra);    
 
        while (palavra[indice++] != '\0')
            tamanho++;
        
        if (tamanho == 5)
            resposta = 3;
        else {
            if (palavra[0] != 'o') erros++;
            if (palavra[1] != 'n') erros++;
            if (palavra[2] != 'e') erros++;
            if (erros >= 2) resposta = 2;
        }   
        
        printf("%i\n", resposta);
        
    }
    free(palavra);
    return 0;
}