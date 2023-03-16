#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int num_digits(int n, int vector[]){
    int soma = 0;
    int i = 0;
    int digits = 1 + log2(n);

    while (n <= 0) {
        vector[digits-i] = n % 2;
        n -= pow(2, digits-i);
        printf("%d ", n);
    }
    return soma;
}

void calculate_the_maximum(int n, int k) {
    //Write your code here.

    printf("%d\n", n&&k);
    printf("%d\n", n||k);
    printf("%d\n", n^k);
}

int main(void) {
    int n, k;
    int digito = 1 + 3*log2(10);

    scanf("%d %d", &n, &k);

    int converted_n[digito], converted_k[digito];
    int tam_n = num_digits(n, converted_n), tam_k = num_digits(k, converted_k); 

    for (int i = digito; i > 0; i--) {
        printf("%d ", converted_n[i]);
    }

    printf("\n");

    for (int i = digito; i > 0; i--) {
        printf("%d ", converted_k[i]);
    }

    printf("\n");


 
    return 0;
}