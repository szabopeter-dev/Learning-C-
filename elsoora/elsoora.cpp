// elsoora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//I. Forditás
// 1 cpp állományt fordítunk le
//      1. Precompile
//          - #kezdeû sorokat értelmezi és végrehajtja
//          -szintaktikai ellenõrzés (fentrõl - lefelé)
//      2. Compile
//          -lefordítja a kíbõvített cpp állományt
//          - => object fájlt állít elõ
//II. Linkelés
//              -Minden cpp állomány önállóan lefordítható
//              - *.cpp => *.o
//              -Object állománokat össze kell linkelni => .exe


#include <iostream>

//cppreference.com



int main() //fugveny kell return de a mainnel nem
{/*
	std::string firstName;
	std::cout << "What is your first name? ";
	std::cin >> firstName;
	std::cout << "Hello " << firstName << "!";

	int a;
	std::cin >> a;*/

	///*int a = 5u;
	//unsigned b;
	//short c;
	//unsigned short int d;
	//long int e;
	//unsigned long int f;
	//long long g;
	//char h;*/

	// Egész típusok C++11 óta
	//int8_t a;
	//uint8_t b;
	//size_t c; //meret indexelo altalaban

	//lebegõpontos típusok
	float f = 3.14;
	double d = 3.14;

	//logikai típus
	bool baba = true; //false

	baba = 56;

	
	/*int n = 10;
	while (n--)
	{
		std::cout << n << std::endl;
	}*/
	int a = 10;

	while (std::cin >> a, a)
	{
		std::cout << a << std::endl;
	}

	//// referencia típus
	//int a = 5;
	//int& b = a;

	const int b = 5;
	
}

