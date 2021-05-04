#pragma once
#ifndef ISOTOPES_H
#define ISOTOPES_H
#include "element.h"
#include<string>
#include<iostream>
using namespace std;

class Isotopes : public Element
{
private:
	//These variables hold the masses of the isotopes and their percent of natural abundance
	float isotopicMass1;
	float naturalAbundance1;
	float isotopicMass2;
	float naturalAbundance2;
	float isotopicMass3;
	float naturalAbundance3;
	float atomicWeight;

public:
	//Default constructor
	Isotopes() : Element()
	{
		isotopicMass1 = 0.0;
		naturalAbundance1 = 0.0;
		isotopicMass2 = 0.0;
		naturalAbundance2 = 0.0;
		isotopicMass3 = 0.0;
		naturalAbundance3 = 0.0;
		atomicWeight = 0.0;
	}

	//Constructor #2
	void setIsotopes(float isotopicMass1par, float naturalAbundance1par, float isotopicMass2par, float naturalAbundance2par, float isotopicMass3par, float naturalAbundance3par)
	{
		cout << "\n\nIn setIsotopes: " << naturalAbundance1par;
		isotopicMass1 = isotopicMass1par;
		naturalAbundance1 = naturalAbundance1par;
		isotopicMass2 = isotopicMass2par;
		naturalAbundance2 = naturalAbundance2par;
		isotopicMass3 = isotopicMass3par;
		naturalAbundance3 = naturalAbundance3par;

		cout << "\n\nAlso in setIsotopes: " << naturalAbundance1 << endl;
		
		displayIsotopes();
	}

	float getNatAbund1()
	{
		cout << "\n\nIn getNatAbund1: " << naturalAbundance1;
		return naturalAbundance1;
	}
	//Overloaded
	void setAtomicWeight(float atomicWeightpar)
	{
		cout << "\n\nIn setAtomicWeight: " << atomicWeightpar << endl;
		atomicWeight = atomicWeightpar;
		displayAtomicWeight();
	}

	void displayIsotopes()
	{
		cout << fixed << showpoint << setprecision(4);
		cout << "\n\ndisplay Isotopes: \n";
		cout << isotopicMass1 << endl;
		cout << naturalAbundance1 << endl;
		cout << isotopicMass2 << endl;
		cout << naturalAbundance2 << endl;
		cout << isotopicMass3 << endl;
		cout << naturalAbundance3 << endl;
	}

	void displayAtomicWeight()
	{
		cout << "Atomic Weight " << atomicWeight << endl;
	}

	

	float getIsoMass1() const
	{
		return isotopicMass1;
	}

	float getNatAbund2() const
	{
		return naturalAbundance2;
	}

	float getIsoMass2() const
	{
		return isotopicMass2;
	}

	float getNatAbund3() const
	{
		return naturalAbundance3;
	}

	float getIsoMass3() const
	{
		return isotopicMass3;
	}

	//Accessor for atomic weight
	float getAtomicWeight() const
	{
		return atomicWeight;
	}
};

#endif
