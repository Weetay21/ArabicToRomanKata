#include "Converter.h"


#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Test case #1 Arabic to Roman numeral
	Converter *ArabicToRomanNumeral = new Converter();
	cout << "Arabic To Roman Numeral:" << endl;

	cout << "Test case #1: ";
	cout << ArabicToRomanNumeral->ConvertOneToRomanNumeral(1) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	//Test case #2 Arabic to Roman numeral
	cout << "Test case #2: ";
	cout <<  ArabicToRomanNumeral->ConvertThreeToRomanNumeral(3) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	// Test case #3 Arabic to Roman numeral
	cout << "Test case #3: ";
	cout << ArabicToRomanNumeral->ConvertToRomanNumeral(9) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	// Test case #4 Arabic to Roman numeral
	cout << "Test case #4: ";
	cout << ArabicToRomanNumeral->ConvertToRomanNumeral(1066) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	// Test case #5 Arabic to Roman numeral
	cout << "Test case #5: ";
	cout << ArabicToRomanNumeral->ConvertToRomanNumeral(1989) << endl;
	ArabicToRomanNumeral->m_sRomanNumeralOuput.clear();

	delete ArabicToRomanNumeral;
	cout << "\n\n\n";

	

	cout << "Roman Numeral To Arabic:" << endl;
	Converter *RomanNumeralToArabic = new Converter();
	// Test case #1 Roman numeral to Arabic
	RomanNumeralToArabic->m_nArabicNumberOutput = 0;
	cout << "Test case #1: ";
	cout << RomanNumeralToArabic->ConvertOneToArabicNumber("I") << endl;
	
	// Test case #2 Roman numeral to Arabic
	RomanNumeralToArabic->m_nArabicNumberOutput = 0;
	cout << "Test case #2: ";
	cout << RomanNumeralToArabic->ConvertRomanNumeralToArabicNumber("III") << endl;

	// Test case #3 Roman numeral to Arabic
	RomanNumeralToArabic->m_nArabicNumberOutput = 0;
	cout << "Test case #3: ";
	cout << RomanNumeralToArabic->ConvertRomanNumeralToArabicNumber("IX") << endl;

	// Test case #4 Roman numeral to Arabic
	RomanNumeralToArabic->m_nArabicNumberOutput = 0;
	cout << "Test case #4: ";
	cout << RomanNumeralToArabic->ConvertRomanNumeralToArabicNumberRefactored("MLXVI") << endl;

	// Test case #5 Roman numeral to Arabic
	RomanNumeralToArabic->m_nArabicNumberOutput = 0;
	cout << "Test case #5: ";
	cout << RomanNumeralToArabic->ConvertRomanNumeralToArabicNumberRefactored("MCMLXXXIX") << endl;

	cout << "\n\n\n";


	delete RomanNumeralToArabic;

	system("pause");
	return 0;
};
