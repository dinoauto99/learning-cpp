#pragma once
#include <iostream>
#include <string>

class Cls_Animal
{
public:
	float weight;
	void run() {
		std::cout << "Animal is running..." << std::endl;
	}
protected:
	int age;
};

class Cls_Pet {
public:
	string color;
};

class Cls_Cat : public Cls_Animal, public Cls_Pet {
public:
	string name;
	void eat() {
		std::cout << "Cat is eating..." << std::endl;
	}
	void show_age() {
		age = 3;
		std::cout << "Cat is " << age << " years old." << std::endl;
	}
};

class Cls_dog :public Cls_Animal {
public:
	string gender;
	void run() {
		std::cout << "Dog is running..." << std::endl;
	}
};

void SubOOPinheritance() {
	Cls_Cat cat;
	cat.name = "Booo";
	cat.weight = 2.3;
	std::cout << "Name: " << cat.name << "\tWeight: " << cat.weight << std::endl;
	cat.run();
	cat.eat();
	cat.color = "white";
	std::cout << "The cat is " << cat.color << std::endl;
	cat.show_age();
	Cls_dog dog;
	dog.run();
}

/*
Tính kế thừa
Thuộc tính truy cập
Thuộc tính		truy cập bên trong class		truy cập bên ngoài class	được phép kế thừa
public					có								có							có
protected				có								không						có
private					có								không						không

Kiểu kế thừa
- public:
	+ các thành viên public của lớp cha trở thành các thành viên public của lớp con
	+ các thành viên protected của lớp cha trở thành các thành viên protected của lớp con
- protected:
	+ các thành viên public và protected của lớp cha trở thành các thành viên protected của lớp con
- private:
	+ các thành viên public và protected của lớp cha trở thành các thành viên private của lớp con
*/