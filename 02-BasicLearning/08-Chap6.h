#pragma once
#include <iostream>

void MainChap6();
bool Ex1_CheckPrimeNumber(int);
int Ex2_SumPrimeNumbers_meth1(int);
int Ex2_SumPrimeNumbers_meth2(int);
unsigned long Ex3_Factorial_meth1(int);
unsigned long Ex3_Factorial_meth2(int);

void MainChap6() {
	int n;
	std::cout << "Chapter 6.\n";
	//std::cin >> n;
	std::cout << "Ex1: " << Ex1_CheckPrimeNumber(3) << std::endl;
	std::cout << "Ex2.1: " << Ex2_SumPrimeNumbers_meth1(10) << std::endl;
	std::cout << "Ex2.2: " << Ex2_SumPrimeNumbers_meth2(10) << std::endl;
	std::cout << "Ex3.1: " << Ex3_Factorial_meth1(4) << std::endl;
	std::cout << "Ex3.2: " << Ex3_Factorial_meth2(4) << std::endl;

}

bool Ex1_CheckPrimeNumber(int n) {
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int Ex2_SumPrimeNumbers_meth1(int n) {
	int sum = 0;
	for (int i = 2; i <= n; i++)
	{
		if (Ex1_CheckPrimeNumber(i))
		{
			sum += i;
		}
	}
	return sum;
}

int Ex2_SumPrimeNumbers_meth2(int n) {
	if (n > 1)
	{
		return Ex1_CheckPrimeNumber(n) ? n + Ex2_SumPrimeNumbers_meth2(n - 1) : Ex2_SumPrimeNumbers_meth2(n - 1);
	}
	else
	{
		return 0;
	}
}

unsigned long Ex3_Factorial_meth1(int n) {
	unsigned long res = 1;
	for (int i = n; i > 1; i--)
	{
		res *= i;
	}
	return res;
}

unsigned long Ex3_Factorial_meth2(int n) {
	if (n>1)
	{
		return n * Ex3_Factorial_meth2(n - 1);
	}
	else
	{
		return 1;
	}
}
