#include <stdio.h>

void update(int *a,int *b) {
    int temp_sum, temp_gap;
    temp_sum = *a + *b;
    temp_gap = *a - *b;
    if (temp_gap < 0) {
        temp_gap*=-1;
    }
    *a = temp_sum;
    *b = temp_gap;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}