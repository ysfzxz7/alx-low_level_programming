#ifndef MAIN_H
#define MAIN_H
/*=====creat array====*/
char *create_array(unsigned int size, char c);

/*=======str dup =======*/
char *_strdup(char *str);

/*=======strconcat ========*/
char *str_concat(char *s1, char *s2);

/*========alooc grid======*/
int **alloc_grid(int width, int height);

/*====free grid ======*/
void free_grid(int **grid, int height);

/*=====argstostr====*/
char *argstostr(int ac, char **av);

/*=====strtow======*/
char **strtow(char *str);

/*======_putchar=====*/
int _putchar(char c);

#endif
