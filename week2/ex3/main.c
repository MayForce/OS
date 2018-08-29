#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 1, n, k;
    scanf("%d", &n);
    for(i = n; i > 0; i--) {

        for(k = i; k > 1; k--) {
            printf(" ");
        }

        for(k = j; k > 0; k--) {
            printf("*");
        }

        j = j + 2;

        for(k = i; k > 1; k--) {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
