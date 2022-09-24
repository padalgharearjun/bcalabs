/******************************************************************************

Substraction program of two intger numbers

Contributed by : AnuragKale27

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n1 = 0;
  int n2 = 0;
  int sub = 0;

  printf ("EnterFirstNumber:");
  scanf ("%d", &n1);
  printf ("EnterSecondNumber:");
  scanf ("%d", &n2);

  if (n1 > n2)
    {
      sub = n1 - n2;
      printf ("Substraction of %d - %d = %d", n1, n2, sub);
    }
  else
    {
      sub = n2 - n1;
      printf (" %d - %d = %d", n2, n1, sub);
    }
  return 0;
}
