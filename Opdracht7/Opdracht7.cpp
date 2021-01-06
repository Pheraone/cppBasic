// Opdracht7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include "Reverse.h"
#include "Combine.h"

int main()
{
    //initialize the classes
    Reverse reverse;
    Combine combine;

    //call functions
    reverse.ReverseText("textFiles/jabberwocky_lat.txt", "textFiles/reversed_jabberwocky_lat.txt");
    combine.CombineFiles("textFiles/jabberwocky_lat.txt", "textFiles/jabberwocky.txt", "textFiles/combined_jabberwocky.txt");
}
