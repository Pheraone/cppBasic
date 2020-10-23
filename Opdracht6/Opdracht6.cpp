// Opdracht6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//
//Meneer van Puffelen gaat op(herfst)vakantie, met z'n blauwe caravan. Hij neemt zijn rode koffer mee, met daarin een paar groene sokken.
//
//Maak classes voor de caravan, de koffer, en de sokken.Standaard hebben zijn deze alledrie de kleur grijs.
//
//Maak een methode om de koffer in de caravan te zetten.De caravan toont vervolgens de koffer met de inhoud, 
//en de kleuren.
//Op vakantie wordt de caravan(met inhoud) gestolen.
//
//Wijs de caravan aan een nieuwe variabele toe, en toon de inhoud.Klopt die nog ? 
//Klopt de inhoud van de bestaande Caravan variabele nog ?
//
//
//Maak overal gebruik van pointers - dus o.a. : Caravan*, Sokken*, new(), delete

#include <iostream>
#include "Caravan.h"

int main()
{
    std::cout << "Hello World!\n";
    Caravan* caravan = new Caravan("blauw");
    std::cout << "De kleur van de caravan is: " << caravan->getColour() << '\n';
    caravan->putTrunkInCaravan();
    std::cout << "caravan is gone\n";
    Caravan* newCaravan = new Caravan(*caravan);

    std::cout << "De kleur van de nieuwe caravan is: " << newCaravan->getColour() << '\n';
    newCaravan->showContent();

    std::cout << "de aude caravan: \n";
    std::cout << "De kleur van de caravan is: " << caravan->getColour() << '\n';
    caravan->showContent();

    delete(caravan);
    delete(newCaravan);
}
