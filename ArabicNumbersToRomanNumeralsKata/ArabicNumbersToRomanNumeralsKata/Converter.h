#ifndef CONVERTER_H_
#define CONVERTER_H_

#include <string>
using namespace std;


class Converter
{
public:

	 int m_nInputNumber;
	 string m_sRomanNumeralOuput;

	Converter();

	
	 string ConvertOneToRomanNumeral(int _inputNumber);

};




#endif

