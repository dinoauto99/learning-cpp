#pragma once
#include <iostream>
#include <string>

class Cls_Animal_3 {	// abstrac class
public:
	virtual void sound() = 0;
	virtual void move() = 0;
};

class Cls_Cat3 : public Cls_Animal_3 {
public:
	void sound() {
		std::cout << "Cat makes sound meoww" << std::endl;
	}
	void move() {
		std::cout << "Cat is moving..." << std::endl;
	}
};
class Cls_Dog3 : public Cls_Animal_3 {
public:
	void sound() {
		std::cout << "Dog makes sound gowww" << std::endl;
	}
	void move() {
		std::cout << "Dog is moving..." << std::endl;
	}
};

void SubOOPabstraction() {
	Cls_Cat3 cat;
	Cls_Dog3 dog;
	cat.sound();
	cat.move();
	dog.sound();
	dog.move();
}