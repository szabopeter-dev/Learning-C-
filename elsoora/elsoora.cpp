// elsoora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//I. Fordit�s
// 1 cpp �llom�nyt ford�tunk le
//      1. Precompile
//          - #kezde� sorokat �rtelmezi �s v�grehajtja
//          -szintaktikai ellen�rz�s (fentr�l - lefel�)
//      2. Compile
//          -leford�tja a k�b�v�tett cpp �llom�nyt
//          - => object f�jlt �ll�t el�
//II. Linkel�s
//              -Minden cpp �llom�ny �n�ll�an leford�that�
//              - *.cpp => *.o
//              -Object �llom�nokat �ssze kell linkelni => .exe


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

	// Eg�sz t�pusok C++11 �ta
	//int8_t a;
	//uint8_t b;
	//size_t c; //meret indexelo altalaban

	//lebeg�pontos t�pusok
	float f = 3.14;
	double d = 3.14;

	//logikai t�pus
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

	//// referencia t�pus
	//int a = 5;
	//int& b = a;

	const int b = 5;
	
}

