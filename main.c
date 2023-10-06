#include <stdio.h>
#include "functions.h"
#include "Euler.h"

#define SIZE 2 
int main()
{
   /*unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);

   unsigned int multiples[SIZE];
   printf("multiples = ");
   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%du", &multiples[i]);

   printf("%llu", Problem_1(number, multiples, SIZE))   
   */
   /*unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);
   */

   unsigned long long number = 0;
   printf("Number = ");  
   scanf_s("%llu", &number);
   printf("%llu", Problem_3(number));

   return 0;
}