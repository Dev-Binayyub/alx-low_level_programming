#include <stdio.h>
/**
 * main - program that prints all possible combinations of 2-2 digits.
 * Return: 0
 */
int main(void)
{
int c = 0;
int f_d;
int m_d;
int l_d;
while (c <= 99)
{
f_d = (c / 100 + '0');
m_d = (c / 10 % 10 + '0');
if ((f_d < m_d)
{
putchar(f_d);
putchar(m_d);
if (c != 89)
{
putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
