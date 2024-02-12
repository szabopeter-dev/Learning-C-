// elsoora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//I. Forditoas
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

int main() //fugveny kell return de a mainnel nem
{
    std::cout << "Hello World!\n";

    return 0; //alapbol 0val tér vissza intként
    
}

