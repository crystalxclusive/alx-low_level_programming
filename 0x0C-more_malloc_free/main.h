#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _strlen(char *s);
char *copychar(char *s1, char c, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi_digit(char x);
int _isNumber(char *argv);
void *mul_array(char *a1, int len1, char a2, char *a3, int lena);
void print_array(char *a, int nb);

#endif
