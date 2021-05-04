#pragma once
#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <iostream>
using namespace std;

//Vehicle class holds the general data 'bout the ride.
class Element
{
private:
	string symbol;
	char type;
	int numIsotopes;
	
public:
	//Default constructor
	Element()
	{
		symbol = "";
		type = {};
		numIsotopes = 0;
	}

	//Constructor
	void setElement(string ELsymbol, char ELType, int ELnumIsotopes)
	{
		symbol = ELsymbol;
		type = ELType;
		numIsotopes = ELnumIsotopes;

		displayElement();
	}

	//Display Thingy
	void displayElement()
	{
		cout << "\n\nHere is the element information: \n";
		cout << "Symbol: " << symbol << endl;
		cout << "Type: " << type << endl;
		cout << "Number of isotopes: " << numIsotopes << endl;
	}

	//Accessors
	string getSymbol() const
	{
		return symbol;
	}

	char getType() const
	{
		return type;
	}

	int getNumIsotopes() const
	{
		return numIsotopes;
	}

};
#endif
