#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int vector[4];
    vector[0] = a;
    vector[1] = b;
    vector[2] = c;
    vector[3] = d;

    int max = vector[0];
    for (int i = 1; i < 4; i++) {
        if (max < vector[i]) {
            max = vector[i];
        }
    }

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}