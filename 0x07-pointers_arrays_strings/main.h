#ifndef MAIN_H
#define MAIN_H
/*=====putchar function=======*/
int _putchar(char c);

/*============= _memset============*/
char *_memset(char *s, char b, unsigned int n);

/*====_memcpy=======*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*=====_strchr======*/
char *_strchr(char *s, char c);

/*========strspn=========*/
unsigned int _strspn(char *s, char *accept);

/*====== _strpbrk =========*/
char *_strpbrk(char *s, char *accept);

/*====== strstr======*/
char *_strstr(char *haystack, char *needle);


#endif
