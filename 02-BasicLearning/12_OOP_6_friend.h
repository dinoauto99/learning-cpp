#pragma once
#include <iostream>
#include <string>

class Cls_Point2 {
private:
	int x;
	int y;
public:
	Cls_Point2() {}
	Cls_Point2(int x, int y) {
		this->x = x;
		this->y = y;
	}
	friend void print_point(Cls_Point2 p);
	// friend function không được phép thừa kế vì nó không phải thành viên của class
	// friend function có thể truy cập đến các thành phần private/protected mà không cần getter,setter
	// tăng tính bảo mật để các thành phần private không bị truy cập trái phép
	friend void print_point_inside(Cls_Point2 p) {
		std::cout << "Definition inside of class" << std::endl;
		std::cout << p.x << "\t" << p.y << std::endl;
	}
	friend Cls_Point2 operator+(Cls_Point2 p1, Cls_Point2 p2){
		return Cls_Point2(p1.x + p2.x, p1.y + p2.y);
	}
};

void print_point(Cls_Point2 point) {
	std::cout << "Definition outside of class" << std::endl;
	std::cout << point.x << "\t" << point.y << std::endl;
}

void SubOOPfriendfunction() {
	print_point(Cls_Point2(1, 2));
	print_point_inside(Cls_Point2(3, 4));
	Cls_Point2 p3 = Cls_Point2(1, 2) + Cls_Point2(3, 4);
	print_point(p3);
	print_point_inside(p3);
}

/********************/
/*	Friend class	*/
/********************/
class B;
class A {
private:
	int x = 4;
	friend B;
};

class B {
public:
	void print_x(A a) {
		std::cout << a.x;
	}
};

void SubOOPfriendclass() {
	B b;
	b.print_x(A());

}