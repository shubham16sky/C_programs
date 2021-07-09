// program to find number of  bits of bits to be flipped to convert
// a given number to another given number using 
// Kernighan's Algorithm

#include <stdio.h>


int
no_of_set_bits_in_xor_of_a_and_b (int a, int b)
{
  printf ("Enter the value of a :");
  scanf ("%d", &a);
  printf ("Enter the value of b :");
  scanf ("%d", &b);
  int x = a ^ b;
  int counter = 0;
  while (x != 0)
    {
      int rmsb = x & -x;
      x = x - rmsb;
      counter++;
    }

  printf ("No of bits to be flipped to convert %d to %d is %d ", a, b,
	  counter);
}

void
main ()
{
  int a;
  int b;
  no_of_set_bits_in_xor_of_a_and_b (a, b);
}
