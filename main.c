#include <stdio.h>
#include "functions.h"
#include "Euler.h"

#define SIZE 2 
int main()
{
   unsigned long long number = 0;
  
   printf("Number = ");  
   //scanf_s("%llu", &number);
   
   /*unsigned int multiples[SIZE];
   printf("multiples = ");
   for (unsigned int i = 0; i < SIZE; ++i)
	   scanf_s("%du", &multiples[i]);
   printf("%llu", problem_1(number, multiples, SIZE));*/
   // Задание первое.
   printf("%llu", Problem_5(number));

   return 0;
}