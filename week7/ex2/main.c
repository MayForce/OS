#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *array = malloc(n*sizeof(int));

    for(i = 0; i< n; i++){
        array[i] = i;
    }

    for(i = 0; i< n; i++){
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
