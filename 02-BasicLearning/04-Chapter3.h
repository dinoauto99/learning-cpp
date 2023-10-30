#pragma once
#include <iostream>
#include <math.h>

void Ex1_GiaiPtBac1() {
	int a, b;	// ax + b = 0
	std::cin >> a >> b;
	std::cout << a << "x + " << b << " = 0" << std::endl;
	if (a == 0)
	{
		std::cout << "Result: not found" << std::endl;
	}
	else
	{
		float res = (-1.0) * b / a;
		std::cout << "Result: x = " << res << std::endl;
	}
}

void Ex2_SumOdd() {
	int n;
	std::cin >> n;
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
	}
	std::cout << "Sum (odd): " << sum << std::endl;
}

void Ex3_ConvertFtoC() {
	float f;
	std::cin >> f;
	float c = (f - 32) / 1.8;
	std::cout << "C = " << c << std::endl;
}

void Ex4_CheckPrime() {
	int n;
	std::cin >> n;
	if (n < 2)
	{
		std::cout << n << " is not prime" << std::endl;
	}
	else if (n == 2)
	{
		std::cout << 2 << " is prime" << std::endl;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				std::cout << n << " is not prime" << std::endl;
				break;
			}
		}
		std::cout << n << "is prime" << std::endl;
	}
}

void Ex5_SumDigits() {
	unsigned int n;
	std::cin >> n;
	// 123 => 6
	int tmp;
	int sum = 0;
	for(;n != 0;) {
		tmp = n % 10;
		sum += tmp;
		n /= 10;
	}
	std::cout << sum << std::endl;
}