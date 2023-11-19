#pragma once
#include <iostream>
#include <string>

class Cls_Calculator {
public:
	int x;
	// Nạp chồng hàm
	Cls_Calculator() {}
	Cls_Calculator(int x) {
		this->x = x;
	}

	int add(int a, int b) {
		return a + b;
	}
	float add(float a, float b) {
		return a + b;
	}
};

class Cls_Point {
public:
	int x, y;
	Cls_Point() {}
	Cls_Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	// Nạp chồng toán tử
	friend Cls_Point operator+(Cls_Point p1, Cls_Point p2) {
		return Cls_Point(p1.x + p2.x, p1.y + p2.y);
	}
};

class Cls_Animal_2 {
public:
	virtual void speak() {	// Phương thức ảo
		std::cout << "Animal is speaking..." << std::endl;
	}
	virtual void move() = 0;	// Phương thức thuần ảo
private:
	string name;
	int age;
};

class Cls_Dog_2 :public Cls_Animal_2 {
public:
	// Ghi đè
	void speak() {
		std::cout << "Dog is speaking...." << std::endl;
	}
	void parent_speak() {
		Cls_Animal_2::speak();
	}
	void move() {
		std::cout << "Dog is moving..." << std::endl;
		// Lớp con phải định nghĩa lại phương thức thuần ảo của lớp cha
	}
};


void SubOOPpolymorphism() {
	// Nạp chồng hàm
	Cls_Calculator c1;
	int a = 1, b = 2;
	std::cout << "1 + 2 = " << c1.add(a, b) << std::endl;
	float c = 1.1, d = 2.2;
	std::cout << "1.1 + 2.2 = " << c1.add(c, d) << std::endl;
	// Nạp chồng toán tử
	Cls_Point p1(1, 2), p2(3, 4);
	Cls_Point p3 = p1 + p2;
	std::cout << p3.x << "\t" << p3.y << std::endl;
	// Ghi đè
	/*Cls_Animal_2 ani; // Lớp chứa phương thức thuần ảo không thể tạo ra đối tượng mới
	ani.speak();*/
	Cls_Dog_2 dog2;
	dog2.speak();
	dog2.parent_speak();
	// Phương thức ảo virtual
	Cls_Animal_2* animal = new Cls_Dog_2;
	animal->speak();
	animal->move();
}

/*
Tính đa hình
- Nạp chồng:
	+ Nạp chồng hàm
	+ Nạp chồng toán tử
- Ghi đè
- Phương thức ảo
*/