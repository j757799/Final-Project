//Name: Jesse Picker
//Date: 5/3/2021
//Project Name: CIS 1201 Final Project
//Project Description: This program calculates the atomic weight on the periodic table of elements using inputs for an element's isotopic masses and % natural abundance.

//Libraries
#include<iostream>
#include<iomanip>
#include<string>
#include "element.h"
#include "isotopes.h"

//Program Structure
using namespace std;

//Function prototypes
void getInputCalcAtomWht(Isotopes);

int main() 
{
	char choice = {'Y'}; //To hold users continue choice
	Isotopes set; //Isotopes class type variable

	//Intro
	cout << "\nEvery element on the periodic table of elements contains an atomic weight, also sometimes referred to as an atomic mass.\n\n";

	cout << "It is calculated as a weighted average of the masses of an element's naturally occuring isotopes.\n\n";

	cout << "Isotopes are two or more types of the same atom that have differing numbers of neutrons, and thus, different atomic masses.\n\n";

	cout << "Values of atomic weight are relative to the mass of the carbon-12 isotope and so, are unitless numbers.\n\n";

	cout << "This program will calculate the atomic weight of an element on the periodic table using the % abundance and mass of the isotope for elements containing between 2 and 3 naturally occuring isotopes.\n\n";

	//Do/While function to allow the user to repeat calculations
	do
	{
		getInputCalcAtomWht(set);
		cout << "\n\nDo you want to calculate another atomic weight? (Y/N): ";
			cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	cout << endl << endl;
	system("pause");
	return 0;
}

void getInputCalcAtomWht(Isotopes set)
{
	string ELsymbol; //to hold element symbol
	char ELtype; //to hold element type
	int numIsotopes; //must be either 2 or 3 for this program

	//Variables to hold isotope info
	float isotopicMass1par;
	float naturalAbundance1par;
	float isotopicMass2par;
	float naturalAbundance2par;
	float isotopicMass3par;
	float naturalAbundance3par;

	float atomicWeightparameter = 0.0; //to hold atomic weight

	//Get info from user
	cout << "\n\nEnter the element's symbol: ";
	cin >> ELsymbol;
	cout << endl;

	cout << "\nEnter the element's type (M for metal, N for non-metal and G for gas): ";
	cin >> ELtype;
	cout << endl;

	cout << "\nEnter the number of isotopes (must be at least 2 and no greater than 3) :";
	cin >> numIsotopes;
	cout << endl;

	if (numIsotopes < 2 || numIsotopes > 3)
	{
		cout << "\n\nThe number of isotopes must be either 2 or 3: ";
		cin >> numIsotopes;
		cout << endl;
	}

	cout << "\nEnter the isotopic mass of isotope 1: ";
	cin >> isotopicMass1par;
	cout << endl;

	cout << "\nEnter the isotopic abundance (%) of isotope 1: ";
	cin >> naturalAbundance1par;
	cout << endl;

	cout << "\nEnter the isotopic mass of isotope 2: ";
	cin >> isotopicMass2par;
	cout << endl;

	cout << "\nEnter the isotopic abundance (%) of isotope 2: ";
	cin >> naturalAbundance2par;
	cout << endl;

	if (numIsotopes == 3)
	{
		cout << "\nEnter the isotopic mass of isotope 3: ";
		cin >> isotopicMass3par;
		cout << endl;

		cout << "\nEnter the isotopic abundance (&) of isotope 3: ";
		cin >> naturalAbundance3par;
		cout << endl;
	}
	else
	{
		isotopicMass3par = 0.0;
		naturalAbundance3par = 0.0;
	}

	//Calculate atomic weight
	atomicWeightparameter = (((naturalAbundance1par) / 100) * isotopicMass1par) + (((naturalAbundance2par) / 100) * (isotopicMass2par));

	if (numIsotopes == 3)
	{
		atomicWeightparameter = atomicWeightparameter + (((naturalAbundance3par) / 100) * isotopicMass3par);
	}

	//Call set functions
	set.setElement(ELsymbol, ELtype, numIsotopes);

	set.setIsotopes(numIsotopes, isotopicMass1par, naturalAbundance1par, isotopicMass2par, naturalAbundance2par, isotopicMass3par, naturalAbundance3par);

	set.setAtomicWeight(atomicWeightparameter);
}