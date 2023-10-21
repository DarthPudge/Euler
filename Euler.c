#include "Euler.h"

unsigned long long Problem_1(const unsigned long long  number_, 
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
unsigned long long Problem_2(const unsigned  long long  number_)
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
unsigned long long Problem_3(const unsigned long long number_)
{
    unsigned long long divider;
    unsigned long long n = number_;

    for (divider = 2; divider < n; divider += 1) {
        while (n % divider == 0)
        {
            n /= divider;
        }
        if (n == 1) break;
    }
    return divider;
}
unsigned long long Problem_4(const unsigned long long number_)
{
    int palindrome = 0;
    int res = 0;
    int max = 0;
    for (int a = 900; a < 1000; a++)
    {
        for (int b = 900; b < 1000; b++)
        {
            res = a * b;
            if (IsPalindrome(res))
            {
                palindrome = res;
                if (max < palindrome)
                {
                    max = palindrome;
                }
            }

        }
    }
    return palindrome;
}
unsigned long long Problem_5(const unsigned long long number_)
{
    unsigned long long int t = 0;
    unsigned long long int minNum = 20;
    while (minNum)
    {
        if (t == 190)
        {
            break;
        }

        for (int i = 1; i < 20; ++i)
        {

            if (minNum % i == 0)
            {
                t += i;
            }
            else
            {
                t = 0;
                minNum +=20;
                break;
            }
            if (t == 190)
            {
                break;
            }
        }

    }
    return minNum;
}
/* while (n % 2 == 0)
    n /= 2;
    divider++;

    while (divider < n)
{
        if (n % divider == 0)
        {
            if (Prime(divider) == 1)
            {
                while (n % divider == 0)
                    n /= divider;
            }
        }
        divider += 2;
    }
    return n;
}*/
