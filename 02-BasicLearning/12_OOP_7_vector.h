#pragma once
#include <iostream>
#include <vector>

void BasicVector();
class Bank;

class Account {
private:
	string name;
	int balance;
public:
	Account() {}
	Account(string name, int balance) {
		this->name = name;
		this->balance = balance;
	}
	string get_name() {
		return this->name;
	}
	int get_balance() {
		return this->balance;
	}
	friend Bank;
};

class Bank {
private:
	vector<Account> accounts;
public:
	void add_account(string name, int balance) {
		accounts.push_back(Account(name, balance));
	}
	void get_account(string name) {
		int index = -1;
		for (int i = 0; i < this->accounts.size(); i++)
		{
			if (!name.compare(this->accounts[i].name))
			{
				index = i;
			}
		}
		if (index != -1)
		{
			std::cout << "Name: " << this->accounts[index].name << "\t";
			std::cout << "Balance: " << this->accounts[index].balance << std::endl;
		}
		else
		{
			std::cout << "Not found!" << std::endl;
		}
	}
};


void SubOOPvector() {
	//BasicVector();

	Bank bank;
	bank.add_account("Tom", 100000);
	bank.add_account("John", 200000);
	bank.add_account("David", 150000);

	bank.get_account("John");
	bank.get_account("Tommy");

	return;
}

/*
- Tạo lớp Account lưu thông tin tài khoản bao gồm các thuộc tính và phương thức sau:
	+ name: tên tài khoản, private string
	+ balance: số dư tk, private int
	+ get_name: getter lấy giá trị thuộc tính name
	+ get_balance: getter lấy giá trị thuộc tính balance
- Tạo lớp Bank để luu thông tin danh sách tài khoản bao gồm các thuộc tính và phương thức sau:
	+ accounts: lưu danh sách các tài khoản, private
	+ add_account(string name, int balance): thêm tài khoản mới
	+ get_account(string name): lấy thông tin tài khoản thông qua tên tài khoản
*/

void BasicVector() {
	vector<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << "\t";
	}
	std::cout << std::endl;

	numbers.erase(numbers.begin() + 1);
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << "\t";
	}
}