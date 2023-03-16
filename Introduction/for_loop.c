#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    char* cardinal[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine",
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) printf("%s\n", cardinal[i-1]);
        else if (i % 2 == 1) {
            printf("odd\n");
        }
        else {
            printf("even\n");
        }

    }

    return 0;
}
