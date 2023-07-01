#include <stdio.h>
#define N_MAX 101+1
 
int main(){
    char num[N_MAX];
    int casos_teste, converte, i, nleds=0;
    int LED[10] = {6,2,5,5,4,5,6,3,7,6};
 
    scanf("%d",&casos_teste);
    while(casos_teste--){
        scanf("%s", num);
        nleds = 0;
        i = 0;
        while (num[i] != '\0')
        {
            converte = num[i] - '0';
            nleds += LED[converte];
            i++;
        }
        printf("%d leds\n", nleds);
        
    }
 
 
    return 0;
}