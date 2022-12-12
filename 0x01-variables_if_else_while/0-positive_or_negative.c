#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */

/** main - entry point
 *
 * Description: print positiveor negative
 *
 * Return: return is always 0
 *
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%i\n", n);

/* your code goes there */

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
