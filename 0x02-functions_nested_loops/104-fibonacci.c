#include <stdio.h>
/**
*main - prints out first 98 fibonacci numbers.
*starting with 1 and 2, followed by a new line
*Return: return 0
*/
int main(void)
{
int inc;
unsigned long n1 = 0, n2 = 1, n3;
for (inc = 0; inc < 98; inc++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;
if (inc == 97)
printf("\n");
else
printf(", ");
}
return (0);
}
