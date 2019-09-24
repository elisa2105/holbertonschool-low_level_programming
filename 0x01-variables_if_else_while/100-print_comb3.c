<<<<<<< HEAD
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
=======
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
>>>>>>> 4f1f67d1c6e7ff09db285d45e7ed0090ec379ce8
int main(void)
{
int firstChar = 0;
int secondChar = 0;
<<<<<<< HEAD
int a;
a = 1;
=======
int flap = 0;
>>>>>>> 4f1f67d1c6e7ff09db285d45e7ed0090ec379ce8
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
for (secondChar = 48 ; secondChar < 58 ; secondChar++)
{
<<<<<<< HEAD
if ((firstChar != secondChar) && (firstChar < secondChar) && a == 1)
{
putchar (firstChar);
putchar (secondChar);
}
else
a = 0;
if ((firstChar < 57 || secondChar < 57) && a == 1)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
=======
if (firstChar != secondChar && firstChar < secondChar)
{
putchar(firstChar);
putchar(secondChar);
flap = 0;
}
else
flap = 1;
if ((firstChar < 57 || secondChar < 57) && flap == 0)
{
if (firstChar == 56 && secondChar == 57)
;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
>>>>>>> 4f1f67d1c6e7ff09db285d45e7ed0090ec379ce8
return (0);
}
