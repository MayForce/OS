#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


int main()
{
    int i = INT_MAX;
    float f = FLT_MAX;
    double d = DBL_MAX;
    printf("%d %s %d\n",i, "size", sizeof (int));
    printf("%e %s %d\n",f, "size", sizeof (float));
    printf("%e %s %d",d, "size", sizeof (double));


    return 0;
}
