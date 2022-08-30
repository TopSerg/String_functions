#include <iostream>
#include <stdio.h>

#include "functions.h"


int main()
{
    char *str1 = "rty";
    char str2[] = "qwe";
    char *str3 = strdup(str1);
    /*FILE *fp;
    fp = fopen("C:\\Users\\Serge\\CodeBlocks\\Projects\\Test2\\Data_tests.txt", "r");
    puts("1\n");
    puts(fgets(str2, 5, fp));
    puts("1\n");
    fclose(fp); */
    puts(str3);
    return 0;
}
