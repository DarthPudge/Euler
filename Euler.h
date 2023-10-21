#pragma once
/*
* @brief Найти сумму меньших number_, кратных multiples_
* @param number_ : Число меньше которого ищется сумма.
* @param multiples_ : Массив кратных.
* @param size_ : Размер массива.
* @return : Сумма меньших и кратных.
*/
unsigned long long Problem_1(const unsigned  long long  number_,
   const unsigned int* multiples_,
   const unsigned int size_);
/*
* @brief Найти сумму всех четных number_,элементов ряда Фибоначчи
* @param number_ : Число меньше которого ищется сумма.
* @return : Сумму четных чисел.
*/
unsigned long long Problem_2(const unsigned  long long  number_);
/*
* @brief Найти самый большой делитель числа 600851475143.
* @param number_ : Число для которого ищется делитель.
* @return : Самый большой делитель 
*/
unsigned long long Problem_3(const unsigned long long number_);
/*
* @brief Число-палиндром с обеих сторон (справа налево и слева направо) читается одинаково.
* @return : Самый большой Палиндром, полученный произведением двух трехзначных чисел
*/
unsigned long long Problem_4(const unsigned long long number_);
/*
* @brief Найти самое маленькое number_, которое делится нацело на все числа от 1 до 20
* @param number_ : Число
* @return : Самое маленькое число.
*/
unsigned long long Problem_5(const unsigned long long number_);