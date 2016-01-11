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
	 int m  = 1000; 
	 int d  = 500;
	 int c  = 100;
	 int l  = 50;
	 int x  = 10;
	 int v  = 5;
	 int i	= 1;

	 while (_inputNumber >= m)
	 {
		 m_sRomanNumeralOuput.append("M");
		 _inputNumber -= m;
	 }
	 while (_inputNumber >= d)
	 {
		 m_sRomanNumeralOuput.append("D");
		 _inputNumber -= d;
	 }
	 while (_inputNumber >= c)
	 {
		 m_sRomanNumeralOuput.append("C");
		 _inputNumber -= c;
	 }
	 while (_inputNumber >= l)
	 {
		 m_sRomanNumeralOuput.append("L");
		 _inputNumber -= l;
	 }
	 while (_inputNumber >= x)
	 {
		 m_sRomanNumeralOuput.append("X");
		 _inputNumber -= x;
	 }
	 while (_inputNumber >= v)
	 {
		 m_sRomanNumeralOuput.append("V");
		 _inputNumber -= v;
	 }
	 while (_inputNumber >= i)
	 {
		 m_sRomanNumeralOuput.append("I");
		 _inputNumber -= i;
	 }
	 
	 

	


	 return m_sRomanNumeralOuput;
 }