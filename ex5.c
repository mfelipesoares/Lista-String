#include <stdio.h>
 
int main(void){
    int n, i, k;
    int numeroLetras, numeroVogais, numeroConsoantes;
    char txt[10001];
    scanf("%d%*c", &n);
    for(i=0;i<n;i++){ 
        txt[0] = '\0';
        numeroLetras = numeroVogais = numeroConsoantes = 0;
        fgets(txt, 10001, stdin);
        for(k=0;txt[k]!='\n';k++){ 
            if((txt[k]>=65 && txt[k]<=90) || (txt[k]>=97 && txt[k]<=122)){
                numeroLetras++;
                if(txt[k]=='a' || txt[k]=='e' || txt[k]=='i' || txt[k]=='o' || txt[k]=='u' || txt[k]=='A' || txt[k]=='E' || txt[k]=='I' || txt[k]=='O' || txt[k]=='U'){
                    numeroVogais++;
                }else{
                    numeroConsoantes++;
                }
            }
        }
        printf("Letras = %d\n", numeroLetras);
        printf("Vogais = %d\n", numeroVogais);
        printf("Consoantes = %d\n", numeroConsoantes);
    }
    return 0;
}