#include "Converter.h"


#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Test case #1
	Converter *ArabicToRomanNumeral = new Converter();
	cout << "Test case #1: ";
	cout << ArabicToRomanNumeral->ConvertOneToRomanNumeral(1) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	//Test case #2
	cout << "Test case #2: ";
	cout <<  ArabicToRomanNumeral->ConvertThreeToRomanNumeral(3) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	// Test case #3
	cout << "Test case #3: ";
	cout << ArabicToRomanNumeral->ConvertToRomanNumeral(9) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	// Test case #4
	cout << "Test case #4: ";
	cout << ArabicToRomanNumeral->ConvertToRomanNumeral(1066) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	delete ArabicToRomanNumeral;

	cout << "\n\n\n";
	system("pause");
	return 0;
};
