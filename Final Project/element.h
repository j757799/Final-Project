#pragma once
#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <iostream>
using namespace std;

//Element class
class Element
{
private:
	string symbol; //For element symbol
	char type; //For element type
	int numIsotopes; //For number of isotopes
	
public:
	//Default constructor, initializing
	Element()
	{
		symbol = "";
		type = {};
		numIsotopes = 0;
	}

	//Constructor to set variables
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

		if (type == 'M' || type == 'm')
		{
			cout << "Type: Metal" << endl;
		}

		if (type == 'G' || type == 'g')
		{
			cout << "Type: Gas" << endl;
		}

		if (type == 'N' || type == 'n')
		{
			cout << "Type: Non-Metal" << endl;
		}
		
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
