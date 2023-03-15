#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    char ch, s[100], sen[100];
    scanf("%c\n%s\n%[^\n]%*c\n", &ch, s, sen);
    printf("%c\n%s\n%s\n", ch, s, sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}