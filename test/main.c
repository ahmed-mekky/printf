#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    char *str = "this is a string!";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
        printf("[%d]:[%d]\n",len, len2);
        len = _printf(" thier %k\n");
    len2 = printf(" their %k\n");
     printf("[%d]:[%d]\n",len, len2);
        len = _printf("%");
    len2 = printf("%");
    printf("[%d]:[%d]\n",len, len2);
  len = _printf("s%\n");
    len2 = printf("s%\n");
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("sasdf%");
    len2 = printf("sasdf%");
    printf("[%d]:[%d]\n",len, len2);
      len = _printf("%c", '\0');
    len2 = printf("%c", '\0');
    printf("[%d]:[%d]\n",len, len2);
     len = _printf(NULL);
    len2 = printf(NULL);
        printf("[%d]:[%d]\n",len, len2);
len = _printf("%c", 'S');
    len2 = printf("%c", 'S');
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("%c", (char *)0);
    len2 = printf("%c", (char *)0);
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("%%");
    len2 = printf("%%");
	_printf("Length:[%d, %i]\n", len, -0x544432234435A);
    printf("Length:[%d, %i]\n", len2, -0x544432234435A);
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("%s%c%%%%%s%c\n", "string", 'S', "String",'s');
    len2 = printf("%s%c%%%%%s%c\n", "string", 'S', "String",'s');
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf(str);
    len = _printf(str);
    printf("[%d]:[%d]\n",len, len2);

    len2 = printf("%d\n", 13773737375553737737323);
    len = _printf("%d\n", 13773737375553737737323);
    printf("[%d]:[%d]\n",len, len2);

        return (0);
}
