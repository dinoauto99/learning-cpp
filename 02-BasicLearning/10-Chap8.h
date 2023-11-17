#pragma once
#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Circle {
	Circle() {}
	float r;
	Circle(float _r) {
		r = _r;
	}
	friend istream& operator>>(istream& is, Circle& _c) {
		std::cout << "Input radius: ";
		is >> _c.r;
		return is;
	}
	/*friend ostream& operator<<(ostream &os, Circle _c) {
		float Perimeter = 2 * M_PI * _c.r;
		float Area = M_PI * _c.r * _c.r;
		os << "Perimater: " << Perimeter << std::endl;
		os << "Area: " << Area << std::endl;
		return os;
	}*/
	float Perimeter() {
		return 2 * M_PI * r;
	}
	float Area() {
		return r * r * M_PI;
	}
};

void Ex1_Circle() {
	Circle c1;
	std::cin >> c1;
	//std::cout << c1;
	std::cout << "Perimeter: " << c1.Perimeter() << std::endl;
	std::cout << "Area: " << c1.Area() << std::endl;
}

struct Product {
	string name;
	unsigned long long price;
	unsigned int quantity;

	friend istream& operator>>(istream& is, Product& p) {
		std::cout << "Name: ";
		is >> p.name;
		std::cout << "Price: ";
		is >> p.price;
		std::cout << "Quantity: ";
		is >> p.quantity;

		return is;
	}

	friend ostream& operator<<(ostream& os, Product p) {
		os << p.name << "\t" << p.price << "\t" << p.quantity << std::endl;
		return os;
	}
};

void InputProduct(Product*, int);
void WatchProducts(Product*, int);
void AddNewProduct(Product*&, int);
void RemoveProduct(Product*&, int);
int Selection();

void Ex2_Product() {
	int n;
	std::cout << "Number of product: ";
	std::cin >> n;
	Product* p = new Product[n];
	InputProduct(p, n);

	system("cls");
	while (true)
	{
		int choose;
		choose = Selection();
		switch (choose)
		{
		case 1:
			WatchProducts(p, n);
			break;
		case 2:
			AddNewProduct(p, n);
			n++;
			break;
		case 3:
			RemoveProduct(p, n);
			n--;
			break;
		case 0:
			return;
		default:
			std::cout << "This selection has not supported yet!\nTry again...\n";
			break;
		}
	}
}

int Selection() {
	std::cout << "-------------------------\n";
	std::cout << "List of options:\n";
	std::cout << "1.Watch list of products\n";
	std::cout << "2.Add new product\n";
	std::cout << "3.Remove product\n";
	std::cout << "0.End program\n";
	std::cout << "-------------------------\n";
	int choose = 0;
	std::cin >> choose;

	return choose;
}

void InputProduct(Product* p, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << "Input product no." << i + 1 << std::endl;
		std::cin >> p[i];
	}
}

void WatchProducts(Product* p, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << p[i];
	}
}

void AddNewProduct(Product*& p, int n) {
	Product* p2 = new Product[n + 1];
	for (int i = 0; i < n; i++)
	{
		p2[i] = p[i];
	}
	std::cout << "Input new product\n";
	std::cin >> p2[n];
	delete[] p;
	p = p2;
}

void RemoveProduct(Product*& p, int n) {
	Product* p2 = new Product[n - 1];
	std::cout << "Input index to remove: ";
	int index;
	std::cin >> index;
	for (int i = 0; i < n - 1; i++)
	{
		p2[i] = i < (index - 1) ? p[i] : p[i + 1];
	}
	delete[] p;
	p = p2;
}
