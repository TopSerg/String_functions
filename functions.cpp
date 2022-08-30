#include <stdio.h>
#include "functions.h"


void puts(char *str)
{
    int num_of_letter;
    for(num_of_letter = 0; *(str+num_of_letter) != '\0'; num_of_letter++)
    {
        putchar(*(str+num_of_letter));
    }
}

char *strchr(char *str1, char *str2)
{
    int i = 0;
    char* answer = NULL;

    while(*(str1+i) != 0)
    {
        i++;

        if (*(str1+i) == *(str2))
        {
            if(SergeCMP(str1, str2, i))
            {
                answer = (str1+i);
                break;
            }
        }
    }
    return answer;
}

bool SergeCMP(char* str1, char* str2, int j)
{
    int end_of_str2 = *str2, i = 0;

    while(end_of_str2 != 0)
    {
        i++;

        if(*(str1+i+j) != *(str2+i))
        {
            return false;
        }

        end_of_str2 = *(str2+i);
    }

    return true;
}

int strlen(const char* str)
{
    int num_of_letter;
    for(num_of_letter = 0; *(str+num_of_letter) != '\0'; num_of_letter++)
    {
    }
    return num_of_letter;
}

char* strcpy(char* str1, char* str2)
{
    int num_of_letter;
    for(num_of_letter = 0; *(str2+num_of_letter) != '\0'; num_of_letter++)
    {
        *(str1+num_of_letter) = *(str2+num_of_letter);
    }

    *(str1+num_of_letter) = *(str2+num_of_letter);

    return str1;
}

char* strncpy(char* str1, char* str2, int n)
{
    int num_of_letter;
    for(num_of_letter = 0; num_of_letter < n; num_of_letter++)
    {
        *(str1+num_of_letter) = *(str2+num_of_letter);
    }

    return str1;
}

char* strcat(char* str1, char* str2)
{
    int num_of_letter = 0, len_str1 = strlen(str1);

    for(num_of_letter = len_str1; *(str2+num_of_letter-len_str1) != '\0'; num_of_letter++)
    {
        *(str1+num_of_letter) = *(str2+num_of_letter-len_str1);
    }

    *(str1+num_of_letter) = *(str2+num_of_letter-len_str1);

    return str1;
}

char* strncat(char* str1, char* str2, int n)
{
    int num_of_letter = 0, len_str1 = strlen(str1);

    for(num_of_letter = len_str1; num_of_letter-len_str1 < n; num_of_letter++)
    {
        *(str1+num_of_letter) = *(str2+num_of_letter-len_str1);
    }

    *(str1+num_of_letter) = '\0';

    return str1;
}

char *fgets(char *s, int n, FILE *stream)
{
    int num_of_letter = 0;
    char next_letter;
    if(stream == NULL)
    {
        return NULL;
    }

    for(num_of_letter = 0; num_of_letter < n; num_of_letter++)
    {
        next_letter = getc(stream);

        if(next_letter == EOF)
        {
            return NULL;
        }
        else if(next_letter == '\n')
        {
            *(s+num_of_letter) = next_letter;

            *(s+num_of_letter+1) = '\0';

            return s;
        }
        else
        {
            *(s+num_of_letter) = next_letter;
        }
    }

    printf("%d\n", num_of_letter);

    *(s+num_of_letter) = '\0';

    printf("%d\n", *(s+num_of_letter));

    return s;
}

char *strdup(char *s)
{
    int len = strlen(s);
    char p[len];
    strcpy(p, s);
    return p;
}

char *getline(char* str, int streamsize)
{
    for(int i = 0; i < streamsize; i++)
    {
        char separator = '\n';

        char letter = getchar();

        *(str+i) = letter;

        if (letter == separator || letter == '\0')
        {
            return str;
        }
    }

    return str;
}

