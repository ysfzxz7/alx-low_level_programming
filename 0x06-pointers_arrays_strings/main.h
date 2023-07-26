#ifndef MAIN_H
#define MAIN_H
/*=====  strcat  =======*/
char *_strcat(char *dest, char *src);

/*=======strcncat===========*/
char *_strncat(char *dest, char *src, int n);

/*========strncpy==============*/
char *_strncpy(char *dest, char *src, int n);

/*========strcmp=================*/
int _strcmp(char *s1, char *s2);

/*============reverse==============*/
void reverse_array(int *a, int n);

/*=========toupper==============*/
char *string_toupper(char *);

/*===========cap String ===============*/
char *cap_string(char *);

/*=============leet ===============*/
char *leet(char *);

/*=======rot13==========*/
char *rot13(char *);

/*=========print number===========*/
void print_number(int n);

/*===========infinte add ==============*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/*======print buffer============*/
void print_buffer(char *b, int size);

/*===========putchar=========*/
int _putchar(char c);
#endif
