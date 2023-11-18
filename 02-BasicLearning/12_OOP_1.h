#pragma once
#include <iostream>

using namespace std;

class PersonInfo {
public:
	// property
	string name;
	int age;
	string address;
	// method
	void Working() {
		cout << name << " (" << role << ") " << " is working in " << location << endl;
	}
	// cosntructor
	PersonInfo() {
		cout << "Constructor without argument" << endl;
	}
	PersonInfo(string _name, int _age, string _address) {
		name = _name;
		age = _age;
		address = _address;
	}
private:
	string role = "dev";
	string location = "HCMC";
};

void ClsInCpp() {
	PersonInfo p1;
	p1.name = "Tom";
	p1.age = 20;
	p1.address = "New York";
	p1.Working();
	PersonInfo p2("John", 21, "LA");
	p2.Working();
}