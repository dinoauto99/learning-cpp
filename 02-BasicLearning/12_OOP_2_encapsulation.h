#pragma once
#include <iostream>

class Square	// Encapsulation
{
private:
	float side_length;

public:
	//setter
	void set_side_length(float _side_length) {
		side_length = _side_length;
	}
	//getter
	float get_side_length() {
		return side_length;
	}
};

class Cat	// Pointer and object
{
private:
	string name;
	int age;
public:
	Cat() {}
	//Cat(string _name, int _age) {
	//	name = _name;
	//	age = _age;
	//}
	Cat(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string get_name() {
		return this->name;
	}
	int get_age() {
		return this->age;
	}

};

void SubOOP_encapsulation() {
	// Encapsulation
	//Square s1;
	//s1.set_side_length(1.2);
	//std::cout << "Side length: " << s1.get_side_length();

	// Pointer and object
	//Cat cat("bo", 2);
	Cat* cat = new Cat("Bop", 3);
	std::cout << "Name: " << cat->get_name() << endl;	// (*cat)->get_name()
	std::cout << "Age: " << cat->get_age() << endl;

}

/*
Tính đóng gói
Sử dụng getter, setter để get, set các đối tượng private, đảm bảo tính bảo mật
*/
