#include <stdio.h>
#include <stdlib.h>
 
long int string2int(const char *str) {
    return strtol(str, NULL, 10);
}
 
int main() {
    char str[129];
 
    while (scanf("%s", str) != EOF) {
        long int number = string2int(str);
        printf("%ld %ld\n", number, number * 2);
    }
 
    return 0;
}