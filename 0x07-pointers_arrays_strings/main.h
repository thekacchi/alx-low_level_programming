#ifndef MAIN_h
#define MAIN_h

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);

#endif
