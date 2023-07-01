#include <stdio.h>
#include <ctype.h>
 
int main() {
    char sentence[51];
 
    while (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        int i, uppercase = 1;
 
        for (i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] == ' ') {
                putchar(' ');
                continue;
            }
 
            if (uppercase) {
                putchar(toupper(sentence[i]));
                uppercase = 0;
            } else {
                putchar(tolower(sentence[i]));
                uppercase = 1;
            }
        }
    }
 
    return 0;
}