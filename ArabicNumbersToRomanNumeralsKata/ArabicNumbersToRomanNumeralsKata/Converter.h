#ifndef CONVERTER_H_
#define CONVERTER_H_

#include <string>
using namespace std;


class Converter
{
public:

	 int m_nInputNumber;
	 int m_nArabicNumberOutput;

	 string m_sRomanNumeralOuput;

	 //Constructor
	Converter();

	// Functions to convert from Arabic numbers to Roman Numeral
	string ConvertOneToRomanNumeral(int _inputNumber);
	string ConvertThreeToRomanNumeral(int _inputNumber);
	string ConvertToRomanNumeral(int _inputNumber);

	// Functions to convert from Roman Numeral to Arabic numbers
	int ConvertOneToArabicNumber(string _inputString);

};




#endif

