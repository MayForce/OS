#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *f = fopen("/dev/random", "r");

    char mass[21];
    fgets(mass, 21, f);
    printf("%s", mass);

    return 0;

}
