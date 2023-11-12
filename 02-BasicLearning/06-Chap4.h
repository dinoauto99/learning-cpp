#pragma once
#include <iostream>

void Ex1_SortDecrease() {
	int n;
	int a[10];
	std::cout << "sort array" << std::endl;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}

void Ex2_FindSum() {
	int n, k;
	int a[10];
	std::cout << "Find sum in array" << std::endl;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	int f[2] = { 0 };
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int tmp = a[i] + a[j];
			if (tmp == k)
			{
				f[0] = i;
				f[1] = j;
				break;
			}
		}
	}
	if (f[0] != f[1] && f[0] >= 0 && f[1] >= 0)
	{
		std::cout << f[0] << "\t" << f[1] << std::endl;
	}
	else
	{
		std::cout << "not found" << std::endl;
	}
}

void Ex3_Sum2Matrix() {
	std::cout << "sum 2 matrix" << std::endl;
	int a[10][10], b[10][10], c[10][10];
	int n, m;
	std::cin >> n >> m;
	std::cout << "input 1:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}
	std::cout << "input 2:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> b[i][j];
		}
	}
	std::cout << "matrix 1:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << a[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "matrix 2:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << b[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "sum" << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << c[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

void Ex4_SumOddinMatrix() {
	std::cout << "Sum odd in matrix:" << std::endl;
	int n, m;
	int a[10][10];
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = a[i][j] % 2 == 1 ? sum + a[i][j] : sum;
		}
	}
	std::cout << "sum = " << sum << std::endl;
}

void BubbleSort1(int a[10], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}

void BubbleSort2(int a[10], int n) {
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}