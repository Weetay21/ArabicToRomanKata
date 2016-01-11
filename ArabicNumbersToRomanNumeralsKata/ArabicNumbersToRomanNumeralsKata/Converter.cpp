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

 string Converter::ConvertThreeToRomanNumeral(int _inputNumber)
 {
	 while ((_inputNumber -= 1) >= 0)
	 {
		 m_sRomanNumeralOuput.append("I");
	 }

	 return m_sRomanNumeralOuput;
 }

 string Converter::ConvertToRomanNumeral(int _inputNumber)
 {

	 int x  = 10;
	 int ix = 9;
	 int v  = 5;
	 int iv = 4;
	 int i	= 1;


	 while(_inputNumber >= ix)
	 {
		 m_sRomanNumeralOuput.append("IX");
		 _inputNumber -= ix;
	 }
	 
	 

	


	 return m_sRomanNumeralOuput;
 }