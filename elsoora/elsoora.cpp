// elsoora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//I. Forditoas
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

int main() //fugveny kell return de a mainnel nem
{
    std::cout << "Hello World!\n";

    return 0; //alapbol 0val t�r vissza intk�nt
    
}

