#ifndef MAIN_H
#define MAIN_H

/*===malloc checked====*/
void *malloc_checked(unsigned int b);

/*===sting concat====*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/*===_calloc=====*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*====array range======*/
int *array_range(int min, int max);

/*=====reaaloc=====*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*=== task number 5====*/
#endif
