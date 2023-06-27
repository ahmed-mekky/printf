#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int i = 12;
    char *str = "please work";

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
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("%s%c%%%%%s%c\n", "string", 'S', "String",'s');
    len2 = printf("%s%c%%%%%s%c\n", "string", 'S', "String",'s');
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf(str);
    len = _printf(str);
    printf("[%d]:[%d]\n",len, len2);

	
    len2 = printf("%d", 123);
    len = _printf("%d", 123);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%d", 0123);
    len = _printf("%d", 0123);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%d", 0x123);
    len = _printf("%d", 0x123);
    printf("[%d]:[%d]\n",len, len2);

    len2 = printf("%i", 123);
    len = _printf("%d", 123);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%i", 0123);
    len = _printf("%d", 0123);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%i", 0x123);
    len = _printf("%d", 0x123);
    printf("[%d]:[%d]\n",len, len2);
   len2 = printf("Negative:[%d]\n", -762534);
   len = _printf("Negative:[%d]\n", -762534);
    printf("[%i]:[%d]\n",len, len2);
    printf("[%d]:[%i]\n",len, len2);

    len2 = printf("%d", i);
    len = _printf("%d", i);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%d", 0);
    len = _printf("%d", 0);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%d%d%d", i, 1, 2);
    len = _printf("%d%d%d", i, 1, 2);
    printf("[%d]:[%d]\n",len, len2);

    len2 = printf("%i", i);
    len = _printf("%i", i);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%i", 0);
    len = _printf("%i", 0);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%i%i%i", i, 1, 2);
    len = _printf("%i%i%i", i, 1, 2);
    printf("[%d]:[%d]\n",len, len2);
    len2 = printf("%i%d%i%", i, 1, 2);
    len = _printf("%d%i%d%", i, 1, 2);
    printf("[%d]:[%d]\n",len, len2);
    len = _printf("%d", (int *)0);
    len2 = printf("%d", (int *)0);
    printf("[%d]:[%d]\n",len, len2);

        return (0);
}

