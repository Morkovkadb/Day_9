#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "data_process.h"
// gcc -Wall -Werror -Wextra ../data_libs/data_io.c data_process.c ../data_libs/data_stat.c
// data_module_entry.c
int main() {
    double *data;
    int n;
    scanf("%d", &n);
    data = (double *)malloc(sizeof(double) * n);
    // Don`t forget to allocate memory !

    input(data, n);

    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");
    free(data);
    return 0;
}
