// Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://hackingcpp.com/index.html
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");
	
	short a;
	std::cin >> a;
	a & 1 ? std::cout << "ne chet" : std::cout << "chet";

}
