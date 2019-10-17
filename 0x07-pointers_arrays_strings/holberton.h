#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
int strcmpmv(char *s1, char *s2);
char *_strpbrk(char *s, char *accept);
#endif
