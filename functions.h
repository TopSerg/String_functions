#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void puts(char *str);

char *strchr(char *cs, char *c);

bool SergeCMP(char* str1, char* str2, int j);

int strlen(const char* str);

char* strcpy(char* str1, char* str2);

char* strncpy(char* str1, char* str2, int n);

char* strcat(char* str1, char* str2);

char* strncat(char* str1, char* str2, int n);

char *fgets(char *s, int n, FILE *stream);

char *strdup(char *s);

char *getline(char* str, int streamsize);

#endif // FUNCTIONS_H_INCLUDED
