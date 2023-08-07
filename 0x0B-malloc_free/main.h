#ifndef MAIN_H
#define MAIN_H
/*====creat array===*/
char *create_array(unsigned int size, char c);

/*===strdup==*/
char *_strdup(char *str);

/*======strconcat======*/
char *_strdup(char *str);

/*=====alloc grid======*/
int **alloc_grid(int width, int height);

/*======free grid=======*/
void free_grid(int **grid, int height);

/*=====argstostr=====*/
char *argstostr(int ac, char **av);

/*===str tow============*/
char **strtow(char *str);

/*========putchar=====*/
int _putchar(char c);

#endif
