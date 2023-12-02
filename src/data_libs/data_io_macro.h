#ifndef DATA_IO_MACRO_H
#define DATA_IO_MACRO_H

#include <stdio.h>

#define READ_ARRAY(type, var, size)      \
    do {                                 \
        for (int i = 0; i < size; i++) { \
            scanf("%" #type, &var[i]);   \
        }                                \
    } while (0)

#define WRITE_ARRAY(type, var, size)     \
    do {                                 \
        for (int i = 0; i < size; ++i) { \
            pritntf("#" #type, var[i]);  \
            if (i != size - 1) {         \
                printf(" ");             \
            }                            \
        }                                \
    } while (0)
#endif  // DATA_IO_MACRO_H