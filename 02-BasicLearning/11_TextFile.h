#pragma once
#include <iostream>
#include <fstream>

struct Person {
	string name;
	int age;

	Person() {}
	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}
};

void ReadWriteFile() {
	fstream fs;
	fs.open(".\\.\\Text.txt");
	// Open file
	if (!fs.is_open())
	{
		std::cout << "Open file failed." << std::endl;
	}
	// Write to file
	//fs << "Hello word" << std::endl;
	// Read from file
	//string str;
	//getline(fs, str);
	//std::cout << str;
	//fs << "Tommy" << std::endl;
	//fs << 2 << std::endl;
	//string name;
	//int a;
	//getline(fs, name);
	//fs >> a;
	//std::cout << name << "\t" << a << std::endl;
	//fs << "Hello";

	Person* p = new Person[2];
	//p[0] = Person("Tom", 20);
	//p[1] = Person("John", 21);
	//for (int i = 0; i < 2; i++)
	//{
	//	fs << p[i].name << std::endl;
	//	fs << p[i].age << std::endl;
	//}
	
	for (int i = 0; i < 2; i++)
	{
		getline(fs, p[i].name);
		fs >> p[i].age;
		fs.ignore();
	}
	for (int i = 0; i < 2; i++)
	{
		std::cout << p[i].name << std::endl;
		std::cout << p[i].age << std::endl;
	}

	fs.close();
}

/*
ios::in		mở file chế độ đọc nếu file đã tồn tại
ios::out	mở file để ghi đè, nếu không tồn tại sẽ tạo file mới
ios::trunc	mở file để ghi đè, nếu không tồn tại sẽ tạo file mới
ios::app	mở file để ghi thêm vào cuối file
ios::ate	mở file và di chuyển con trỏ xuống cuối file
ios::binary	làm việc với file nhị phân
*/
void TextFileModes() {
	fstream fs;
	fs.open(".\\.\\sample.txt", ios::in | ios::ate);
	if (!fs.is_open())
	{
		std::cout << "Failed." << std::endl;
	}
	/*string name;
	getline(fs, name);
	std::cout << name;*/
	fs << "Hiiiiii";

	string name;
	getline(fs, name);
	std::cout << name << std::endl;

	fs.close();
}

void OtherClassOfTextFile() {
	ifstream ifs;
	ifs.open(".\\.\\sample2.txt");
	if (!ifs.is_open())
	{
		std::cout << "Open failed." << std::endl;
		return;
	}
	string name;
	getline(ifs, name);
	std::cout << name;
	ifs.close();

	ofstream ofs;
	ofs.open(".\\.\\sample2.txt", ios::app);
	if (!ofs.is_open())
	{
		std::cout << "Open failed";
		return;
	}
	ofs << "Add new text here.";
	ofs.close();
}

void BinaryFile() {
	ofstream ofs;
	ofs.open(".\\.\\test.bin", ios::binary);
	if (!ofs.is_open())
	{
		std::cout << "Open failed.";
		return;
	}
	/*int a = 6;
	ofs.write((char*)&a, sizeof(a));
	ofs.close();

	ifstream ifs;
	ifs.open(".\\.\\test.bin", ios::binary);
	int read_a;
	ifs.read((char*)&read_a, sizeof(int));
	std::cout << read_a << std::endl;
	ifs.close();*/

	int n = 3;
	float ar[3] = { 1.1,1.2,1.3 };
	ofs.write((char*)&n, sizeof(int));
	ofs.write((char*)&ar, sizeof(float) * n);
	ofs.close();
	ifstream ifs;
	ifs.open(".\\.\\test.bin", ios::binary);
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	float read_ar[3];
	ifs.read((char*)&read_ar, sizeof(float) * read_n);
	for (int i = 0; i < read_n; i++)
	{
		std::cout << read_ar[i] << "\t";
	}
	ifs.close();
}