#include "Converter.h"


Converter::Converter()
{
	m_nInputNumber = 0;
	m_sRomanNumeralOuput.clear();
}


 string Converter::ConvertOneToRomanNumeral(int _inputNumber)
{
	while ((_inputNumber -= 1) >= 0)
	{
		m_sRomanNumeralOuput.append("I");
	}


	return m_sRomanNumeralOuput;
}