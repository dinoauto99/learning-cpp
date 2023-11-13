#pragma once
#include <iostream>
#include <string>


/*
string method:
	str.substr(x,y)
	str.find(s)
	str.erase(x,n)
	str.replace(x,n,s)
	str.compare(s)
	str.insert(x,s)
	str.length() , str.size()
*/

void Ex1_RemoveRedundantSpace2Sides() {
	std::string s1;
	std::getline(std::cin, s1);
	std::cout << "before: " << s1 << std::endl;
	/*for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == ' ')
		{
			s1.erase(i, 1);
			i--;
		}
		else
		{
			break;
		}
	}
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		if (s1[i] == ' ')
		{
			s1.erase(i, 1);
		}
		else
		{
			break;
		}
	}*/
	while (s1[0] == ' ')
	{
		s1.erase(0, 1);
	}
	while (s1[s1.length() - 1] == ' ')
	{
		s1.erase(s1.length() - 1, 1);
	}
	std::cout << "after: " << s1 << std::endl;
}

void Ex2_RemoveRedundantSpaceInLine() {
	std::string s1;
	std::getline(std::cin, s1);
	std::cout << "before: " << s1 << std::endl;
	/*    abc   xyz   123   =>    abc xyz 123 */
	for (int i = 0; i < s1.length() - 1; i++)
	{
		if (s1[i] == ' ' && s1[i + 1] == ' ')
		{
			s1.erase(i, 1);
			i--;
		}
	}
	std::cout << "after: " << s1 << std::endl;
}

void Ex3_UpperCaseEachWord() {
	std::string str;
	std::getline(std::cin, str);
	std::cout << "before: " << str << std::endl;
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	str[0] = str[0] != ' ' ? toupper(str[0]) : str[0];
	std::cout << "after: " << str << std::endl;
}

void Ex4_OptimizeString() {
	std::string str;
	std::getline(std::cin, str);
	std::cout << "before: " << str << std::endl;
	// Remove space at begin/end of string
	while (str[0] == ' ' || str[str.length() - 1] == ' ')
	{
		str = str[0] == ' ' ? str.erase(0, 1) : str.erase(str.length() - 1);
	}
	// Remove redundant spaces between words
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			str.erase(i, 1);
			i--;
		}
		// Lowercase all characters
		str[i] = tolower(str[i]);
	}
	// Uppercase char at begining of each word
	str[0] = str[0] != ' ' ? toupper(str[0]) : str[0];
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	std::cout << "after: " << str << std::endl;
}