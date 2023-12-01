#include "functions.h"
#include <math.h>
#include "function.h"
unsigned long long Square(const long long value_)
{

   return value_*value_;
}
int Reverse(unsigned long value_)
{
	long long int num = value_;
	long long int rev = 0;
	long long int rem = 0;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	return rev;
}

int IsPalindrome(unsigned long long value_)
{
	int reverse = 0, temp = value_;
	while (temp > 0)
	{
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}
	return (value_ == reverse);
}


int IsPrime(unsigned long value_)
{
	int prime = 0;

	for (int i = 2; i <= sqrt(value_); ++i)
	{
		if (value_ % i == 0)
		{
			prime = 2;
			break;
		}
		else
		{
			prime = 1;
		}
	}

	return prime;
}
