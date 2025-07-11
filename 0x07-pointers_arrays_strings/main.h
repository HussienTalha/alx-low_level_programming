#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int c);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int _isupper(int c);
int mul(int a, int b);
int _isdigit(int c);
void print_numbers(void);
void more_numbers(void);
void print_most_numbers(void);
void print_line(int);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void reset_to_98(int *ptr);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *s);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *s);
void puts_half(char *s);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *s);
char *_memset(char *s, char b, int n);
char *_memcpy(char *dest, char *src, int n);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a,int size);
#endif
