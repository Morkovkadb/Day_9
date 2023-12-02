#include "decision.h"
// gcc -Wall -Werror -Wextra decision.c ../data_libs/data_io.c ../data_libs/data_stat.c
// yet_another_decision_module_entry.c
int main() {
    double *data;
    int n;
    scanf("%d", &n);
    data = (double *)malloc(sizeof(double) * n);
    input(data, n);
    if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");
    free(data);
    return 0;
}
