#pragma once
#include <iostream>

void Ex1_InputSum2D() {
	std::cout << "input array 2d" << std::endl;
	int n, m;
	std::cin >> n >> m;
	int a[10][10];
	for (int i = 0; i < n; i++)		//row
	{
		for (int j = 0; j < m; j++)	//column
		{
			std::cin >> a[i][j];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << a[i][j] << "\t";
			sum += a[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "sum = " << sum << std::endl;
}

void Ex2_MaxArray1D() {
	int n, max;
	std::cout << "array 1d and max" << std::endl;
	std::cin >> n;
	int a[10];
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	max = a[0];
	for (int i = 1; i < n; i++)
	{
		max = a[i] > max ? a[i] : max;
	}
	std::cout << "max: " << max << std::endl;
}

void Ex3_MaxEachRow() {
	int n, m;
	int a[10][10];
	int max[10];
	std::cout << "max of each row" << std::endl;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		max[i] = a[i][0];
		for (int j = 0; j < m; j++)
		{
			max[i] = a[i][j] > max[i] ? a[i][j] : max[i];
		}
		std::cout << "max[" << i << "] = " << max[i] << std::endl;
	}
}

void Ex4_SumBorder() {
	int n, m;
	int a[10][10];
	int max[10];
	std::cout << "sum of border" << std::endl;
	std::cin >> n >> m;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
			{
				sum += a[i][j];
			}
		}
	}
	std::cout << "sum = " << sum << std::endl;
}