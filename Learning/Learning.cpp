// Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://hackingcpp.com/index.html
#include <iostream>
#include <vector>
#include <limits>


void printVector (std::vector<int>);
std::vector<int> garbageFirst ();
void usingStdStringAndLiterals ();
using indexes = std::vector<int>;
using namespace std::string_literals;

int main()
{
    setlocale(LC_ALL, "Rus");
	

	//printVector(garbageFirst());
	usingStdStringAndLiterals();
}

std::vector<int> garbageFirst()
{
	indexes a{};
	short b;

	std::cout << "Сколькими цифрами заполнить list? (ограничение " 
	<< std::numeric_limits<short>::max() << " строк):";

	std::cin >> b;

	for(int i = 0; i < b; i++)
	{
		a.push_back(i);
	}
	return a;
}

void printVector(std::vector<int> indexes)
{
	for(int i: indexes)
	{
		std::cout << i << "\n";
	}
}

void usingStdStringAndLiterals()
{
	auto test{"Hello world"s};
	test[0] = 'h';
	test.insert(5, "v4");
	test += "kek";
	test += R"(\n\t)";

	std::cout << test;
}
