#include "Euler.h"

unsigned long long Problem_1(const unsigned int number_, 
   const unsigned int* multiples_, 
   const unsigned int size_)
{
   unsigned long long sum = 0;
   for (unsigned int n = 0; n < number_; ++n)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (n % multiples_[i] == 0)
         {
            sum += n;
            break;
         }
      }
   }
   return sum;
}
unsigned long long Problem_2(const unsigned int number_)
{
   unsigned long long sum = 0;
   int firstFib = 1;
   int secondFib = 2;
   while (secondFib < number_)
   {
      if (secondFib % 2 ==0)
         sum += secondFib;

      secondFib = firstFib + secondFib;
      firstFib = secondFib - firstFib;

   }
   return sum;
}

unsigned long long Problem_3(const unsigned int number_)
{
   unsigned long long sum = 0;

   while()
   return 0;
}
