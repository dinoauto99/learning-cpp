#pragma once
#include <iostream>

void InputInteger(char, int&);
void InputArray(int*, int);
void PrintArray(int*, int);

void InputInteger(char ch, int& n) {
	std::cout << "Input " << ch << " = ";
	std::cin >> n;
}

void InputArray(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
}

void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
}

void Ex1_AddElementDynamicArray() {
	std::cout << "Add element to dynamic array" << std::endl;
	int n;
	InputInteger('n', n);
	int* a = new int[n];
	InputArray(a, n);
	// New dynamic array
	int* b = new int[n + 1];
	// Copy elements
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	// Add new element
	std::cout << "New element: ";
	std::cin >> b[n];
	delete[] a;
	a = b;
	PrintArray(a, n + 1);
	delete[] b;
}

void Ex2_RemoveElementInDynamicArray() {
	std::cout << "Remove element in dynamic array" << std::endl;
	int n;
	InputInteger('n', n);
	int* a = new int[n];
	InputArray(a, n);
	int x;
	std::cout << "Remove at: ";
	std::cin >> x;
	// Remove at old array
	for (int i = x; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	// Create new array
	int* b = new int[n - 1];
	// Copy old to new
	for (int i = 0; i < n - 1; i++)
	{
		b[i] = a[i];
	}
	delete[] a;
	// Assgin new to old and decrease size
	a = b;
	PrintArray(a, n - 1);
	delete[] b;
}

void Ex3_AddElementAtSpecificIndex() {
	std::cout << "Add element add specific index in dynamic array" << std::endl;
	int n;
	InputInteger('n', n);
	int* a = new int[n];
	InputArray(a, n);
	int x, y;
	InputInteger('x', x);
	InputInteger('y', y);
	// Create new array
	int* b = new int[n + 1];
	// Copy old to new and add element
	for (int i = 0; i < 1; i++)
	{
		b[i] = a[i];
	}
	b[x] = y;
	for (int i = x; i < n; i++)
	{
		b[i + 1] = a[i];
	}
	delete[] a;
	// Assign new to old and increase size
	a = b;
	PrintArray(a, n + 1);
	delete[] b;
}

void Ex4_BubbleSortDynamicArray() {
	std::cout << "Sort in dynamic array" << std::endl;
	int n;
	InputInteger('n', n);
	int* a = new int[n];
	InputArray(a, n);
	std::cout << "before: ";
	PrintArray(a, n);
	// Create new array
	int* b = new int[n];
	// Copy old to new
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	delete[] a;
	// Bubble sort
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (b[j] > b[j + 1])
			{
				int tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}
	// Assign new to old
	a = b;
	std::cout << "\nafter: ";
	PrintArray(a, n);
	delete[] b;
}