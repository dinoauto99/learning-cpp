#pragma once
#include <iostream>

void Ex1_InputArray();
void Ex2_RemoveElement();
void Ex3_InsertElement();

void Ex1_InputArray() {
	int ar[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		std::cout << ar[i] << "\t";
	}
	std::cout << std::endl;
	int n;
	std::cin >> n;
	for (int i = 0; i < 3; i++)
	{
		ar[i] = i < 2 ? ar[i + 1] : n;
		std::cout << ar[i] << "\t";
	}
	std::cout << "\n";
}

void Ex2_RemoveElement() {
	int ar[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		std::cout << ar[i] << "\t";
	}
	std::cout << "\n";
	int n;
	std::cin >> n;
	// Remove in display
	/*for (int i = 0; i < 5; i++)
	{
		if (i == n - 1)
		{
			continue;
		}
		else
		{
			std::cout << ar[i] << "\t";
		}
	}*/
	// Remove in array
	for (int i = n-1; i < 5; i++)
	{
		if (i<4)
		{
			ar[i] = ar[i+1];
		}
		else
		{
			ar[i] = 0;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << ar[i] << "\t";
	}
	std::cout << "\n";
}

void Ex3_InsertElement() {
	int ar[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		std::cout << ar[i] << "\t";
	}
	std::cout << "\n";
	int x, y;
	std::cin >> x >> y;

	for (int i = 4; i > x-1; i--)
	{
		ar[i] = ar[i - 1];
	}
	ar[x - 1] = y;

	for (int i = 0; i < 5; i++)
	{
		std::cout << ar[i] << "\t";
	}
	std::cout << "\n";
}