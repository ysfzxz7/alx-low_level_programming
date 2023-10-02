#ifndef MAIN_H
#define MAIN_H


/******MACRO*************/
#define BUF_SIZE 1024

/******HEADER file*******/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/************prototype****************/
size_t read_textfile(const char *filename, size_t letters);
/*******************/
int _putchar(char c);
/********************/
int create_file(const char *filename, char *text_content);
/**********************/
int append_text_to_file(const char *filename, char *text_content);
/*****************************/
#endif
