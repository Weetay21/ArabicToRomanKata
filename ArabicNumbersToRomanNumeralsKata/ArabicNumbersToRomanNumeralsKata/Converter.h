#ifndef CONVERTER_H_
#define CONVERTER_H_

#include <string>
using namespace std;


class Converter
{
public:

	 int m_nInputNumber;


	 string m_sRomanNumeralOuput;

	 //Constructor
	Converter();

	// Functions to convert from Arabic numbers to Roman Numeral
	string ConvertOneToRomanNumeral(int _inputNumber);
	string ConvertThreeToRomanNumeral(int _inputNumber);
	string ConvertToRomanNumeral(int _inputNumber);



};




#endif

