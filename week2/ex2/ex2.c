#include <stdio.h>
#include <string.h>

int main() {
    int i, j = 0;
	char w[1000];
	gets (w);

	for(i = strlen(w) - 1; i >= (int)strlen(w)/2 ; i--) {
        char x = w[i];
        w[i] = w[j];
        w[j] = x;
        j++;
	}
	printf("%s", w);



	return 0;
}
