#include "data_stat.h"

double max(double *data, int n) {
    double max = *data;
    for (int i = 0; i < n; ++i) {
        if (max < *(data + i)) {
            max = *(data + i);
        }
    }
    return max;
}
double min(double *data, int n) {
    double min = *data;
    for (int i = 0; i < n; ++i) {
        if (min > *(data + i)) {
            min = *(data + i);
        }
    }
    return min;
}
double mean(double *data, int n) {
    double sigma = 0;
    for (int i = 0; i < n; ++i) {
        sigma += *(data + i);
    }
    return sigma;
}
double variance(double *data, int n) {
    double summ = 0.0;
    double my_mean = mean(data, n);
    for (int i = 0; i < n; ++i) {
        summ += (*(data + i) - my_mean) * (*(data + i) - my_mean);
    }
    summ /= (double)n;
    return summ;
}