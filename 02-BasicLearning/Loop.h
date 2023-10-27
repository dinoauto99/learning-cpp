#pragma once
#include <iostream>

void Calculator()
{
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

void CountDaysInMonth()
{

}