#pragma once
#ifndef ISOTOPES_H
#define ISOTOPES_H
#include "element.h"
#include<string>
#include<iostream>
using namespace std;

//Isotope class holds isotope information
class Isotopes : public Element
{
private:
	//These variables hold the masses of the isotopes and their percent of natural abundance
	int numIsotopes;
	float isotopicMass1;
	float naturalAbundance1;
	float isotopicMass2;
	float naturalAbundance2;
	float isotopicMass3;
	float naturalAbundance3;
	float atomicWeight;

public:
	//Default constructor, initializing
	Isotopes() : Element()
	{
		isotopicMass1 = 0.0;
		naturalAbundance1 = 0.0;
		isotopicMass2 = 0.0;
		naturalAbundance2 = 0.0;
		isotopicMass3 = 0.0;
		naturalAbundance3 = 0.0;
		atomicWeight = 0.0;
		numIsotopes = 0;
	}

	//Constructor sets isotope variables
	void setIsotopes(int numIsotopepar, float isotopicMass1par, float naturalAbundance1par, float isotopicMass2par, float naturalAbundance2par, float isotopicMass3par, float naturalAbundance3par)
	{
		numIsotopes = numIsotopepar;
		isotopicMass1 = isotopicMass1par;
		naturalAbundance1 = naturalAbundance1par;
		isotopicMass2 = isotopicMass2par;
		naturalAbundance2 = naturalAbundance2par;
		isotopicMass3 = isotopicMass3par;
		naturalAbundance3 = naturalAbundance3par;

		displayIsotopes();
	}

	//Set function for atomic weight
	void setAtomicWeight(float atomicWeightpar)
	{
		atomicWeight = atomicWeightpar;
		displayAtomicWeight();
	}

	//Display function
	void displayIsotopes()
	{
		cout << fixed << showpoint << setprecision(4);
		cout << "\n\ndisplay Isotopes:\n";
		cout << "-----------------\n";
		cout << "Mass of isotope 1: " << isotopicMass1 << endl;
		cout << "\nNatural abundance of isotope 1: " << naturalAbundance1 << endl;
		cout << "\nMass of isotope 2: " << isotopicMass2 << endl;
		cout << "\nNatural abundance of isotope 2: " << naturalAbundance2 << endl;

		if (numIsotopes == 3)
		{
			cout << "\nMass of isotope 3: "<< isotopicMass3 << endl;
			cout << "\nNatural abundance of isotope 3: " << naturalAbundance3 << endl;
		}
	}
	
	//Display atomic weight
	void displayAtomicWeight()
	{
		cout << "\n\nDisplay atomic weight: \n";
		cout << "----------------------\n";
		cout << "\nAtomic Weight: " << atomicWeight << endl;
	}

	//Get functions
	float getNatAbund1()
	{
		return naturalAbundance1;
	}

	float getIsoMass1()
	{
		return isotopicMass1;
	}

	float getNatAbund2()
	{
		return naturalAbundance2;
	}

	float getIsoMass2()
	{
		return isotopicMass2;
	}

	float getNatAbund3()
	{
		return naturalAbundance3;
	}

	float getIsoMass3()
	{
		return isotopicMass3;
	}

	//Accessor for atomic weight
	float getAtomicWeight()
	{
		return atomicWeight;
	}
};
#endif
