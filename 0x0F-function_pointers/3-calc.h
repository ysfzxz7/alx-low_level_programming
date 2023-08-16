#ifndef CALC_H
#define CALC_H

/**
 *struct op - struct op
 *@op: the operator
 *@f: the pointer to funcs
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/*this fun is for adding*/
int op_add(int a, int b);

/*this fun is for sub*/
int op_sub(int a, int b);

/*this fun is for mul*/
int op_mul(int a, int b);

/*this fun is for div*/
int op_div(int a, int b);

/*this fun is for*/
int op_mod(int a, int b);

/*the pointer func*/
int (*get_op_func(char *s))(int, int);
#endif
