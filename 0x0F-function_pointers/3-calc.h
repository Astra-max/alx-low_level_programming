#ifndef CALC_H
#define CALC_H
int add( int a, int b);

/**
 * struct op - name of struct
 * @op: operators
 * @f: functio pointer
*/

typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

#include <stdio.h>
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
