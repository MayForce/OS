#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y) {
    int g = *x;
    *x = *y;
    *y = g;
}

int main()
{
    int first, second;
    scanf("%d %d", &first, &second);
    swap(&first, &second);
    printf("%d %d", first, second);
    return 0;
}
