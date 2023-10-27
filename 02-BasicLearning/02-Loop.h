#pragma once
#include <iostream>

void Calculator();
void Ex1_SumNnumbers();
void Ex2_SumSqr();
void Ex3_Factorial();
float Ex3_Factorial_sub(int);
void Ex4_Div5();

void Calculator() {
	char lua_chon;
	std::cin >> lua_chon;
	int a, b;
	std::cin >> a >> b;
	switch (lua_chon)
	{
	case '+':
		std::cout << "Ket qua: " << a + b;
		break;
	case '-':
		std::cout << "Ket qua: " << a - b;
		break;
	case '*':
		std::cout << "Ket qua: " << a * b;
		break;
	case '/':
		std::cout << "Ket qua: " << (float)a / b;
		break;
	default:
		std::cout << "Lua chon khong hop le";
		break;
	}
}

void Ex1_SumNnumbers() {
	std::cout << "n = ";
	int n;
	std::cin >> n;
	float sum = 0;
	for (int i = 1; i < n + 1; i++)
	{
		sum += i;
	}
	std::cout << "s = " << sum << std::endl;
}

void Ex2_SumSqr() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	float s = 0;
	for (int i = 1; i < n + 1; i++)
	{
		s += (i * i);
	}
	std::cout << "s = " << s << std::endl;
}

void Ex3_Factorial() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	float s = Ex3_Factorial_sub(n);
	std::cout << n << "! = " << s << std::endl;
}

float Ex3_Factorial_sub(int n) {
	if (n > 1)
	{
		return n * Ex3_Factorial_sub(n - 1);
	}
	else
	{
		return 1;
	}
}

void Ex4_Div5() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
		{
			std::cout << i << "\t";
			i += 4;
		}
	}
}