#include <stdio.h>
#include <stdlib.h>

int main() {
    int mass[10000];
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &mass[i]);
    }
    bubble_sort(&mass, n);
    for(i = 0; i < n; i++) {
        printf("%d ", mass[i]);
    }
    return 0;
}

void bubble_sort(int* p, int n) {
    int i, j;
    for(i = 0; i < n ; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(p[j] > p[j + 1]) {
                int t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }

}
