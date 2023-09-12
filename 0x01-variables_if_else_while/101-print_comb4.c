#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m, i;
for (n = 48; n < 58; n++)
{
for (m = n + 1; m < 58; m++)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
