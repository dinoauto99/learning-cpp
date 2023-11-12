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
	for (int i = 0; i < s1.length(); i++)
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
	}
	std::cout << "after: " << s1 << std::endl;
}

void Ex2_RemoveRedundantSpaceInLine() {
	std::string s1;
	std::getline(std::cin, s1);
	std::cout << "before: " << s1 << std::endl;
	/*    abc   xyz   123   =>    abc xyz 123 */
	int startIndex;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ')
		{
			startIndex = i;
			break;
		}
	}
	for (int i = startIndex; i < s1.length(); i++)
	{
 
	}

}
