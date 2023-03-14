#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int TAM = strlen(s);
    s = realloc(s, TAM + 1);
    
    for (int i = 0; i < TAM; i++) {
        if (s[i] != 32) printf("%c", s[i]);
        else printf("\n");
    }

    printf("\n");
    return 0;
}