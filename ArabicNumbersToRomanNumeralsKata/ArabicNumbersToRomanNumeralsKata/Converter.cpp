#include "Converter.h"


Converter::Converter()
{
	m_nInputNumber = 0;
	m_nArabicNumberOutput = 0;
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
	 int cm = 900;
	 int d  = 500;
	 int cd = 400;
	 int c  = 100;
	 int xc = 90;
	 int l  = 50;
	 int xl = 40;
	 int x  = 10;
	 int ix = 9;
	 int v  = 5;
	 int iv = 4;
	 int i	= 1;

	 while (_inputNumber >= m)
	 {
		 m_sRomanNumeralOuput.append("M");
		 _inputNumber -= m;
	 }
	 while (_inputNumber >= cm)
	 {
		 m_sRomanNumeralOuput.append("CM");
		 _inputNumber -= cm;
	 }
	 while (_inputNumber >= d)
	 {
		 m_sRomanNumeralOuput.append("D");
		 _inputNumber -= d;
	 }
	 while (_inputNumber >= cd)
	 {
		 m_sRomanNumeralOuput.append("CD");
		 _inputNumber -= cd;
	 }
	 while (_inputNumber >= c)
	 {
		 m_sRomanNumeralOuput.append("C");
		 _inputNumber -= c;
	 }
	 while (_inputNumber >= xc)
	 {
		 m_sRomanNumeralOuput.append("XC");
		 _inputNumber -= xc;
	 }
	 while (_inputNumber >= l)
	 {
		 m_sRomanNumeralOuput.append("L");
		 _inputNumber -= l;
	 }
	 while (_inputNumber >= xl)
	 {
		 m_sRomanNumeralOuput.append("XL");
		 _inputNumber -= xl;
	 } 
	 while (_inputNumber >= x)
	 {
		 m_sRomanNumeralOuput.append("X");
		 _inputNumber -= x;
	 }
	 while(_inputNumber >= ix)
	 {
		 m_sRomanNumeralOuput.append("IX");
		 _inputNumber -= ix;
	 }
	 while (_inputNumber >= v)
	 {
		 m_sRomanNumeralOuput.append("V");
		 _inputNumber -= v;
	 }
	 while (_inputNumber >= iv)
	 {
		 m_sRomanNumeralOuput.append("IV");
		 _inputNumber -= m;
	 }
	 while (_inputNumber >= i)
	 {
		 m_sRomanNumeralOuput.append("I");
		 _inputNumber -= i;
	 }
	 

	 return m_sRomanNumeralOuput;
 }


 int Converter::ConvertOneToArabicNumber(string _inputString)
 {
	 if (_inputString[0] == (char)'I')
	 {
		 m_nArabicNumberOutput += 1;
	 }


	 return m_nArabicNumberOutput;
 }

 int Converter::ConvertRomanNumeralToArabicNumber(string _inputString)
 {
	 for (int i = 0; i < _inputString.size(); ++i)
	 {
		
		 if (_inputString[i + 1] == (char) 'X')
		 {
			 m_nArabicNumberOutput += 9;
			 i++;
		 }
		 else if (_inputString[i] == (char)'I')
		 {
			 m_nArabicNumberOutput += 1;
		 }
	 }
	 return m_nArabicNumberOutput;
 }

 int Converter::ConvertRomanNumeralToArabicNumberRefactored(string _inputString)
 {
	 for (int i = 0; i < _inputString.size(); ++i)
	 {
		 if (_inputString[i] != _inputString.back())
		 {


			 if (_inputString[i] == (char)'I')
			 {
				 if (_inputString[i + 1] != 'I')
				 {
					 m_nArabicNumberOutput -= 1;
				 }
				 else
				 {
					 m_nArabicNumberOutput += 1;
				 }
			 }
			 if (_inputString[i] == (char) 'V')
			 {
				 m_nArabicNumberOutput += 5;
			 }
			 if (_inputString[i] == (char) 'X')
			 {
				 if (_inputString[i + 1] == 'I' || _inputString[i + 1] == 'V')
				 {
					 m_nArabicNumberOutput += 10;
				 }
				 else
				 {
					 m_nArabicNumberOutput -= 10;
				 }
			 }
			 if (_inputString[i] == (char)'L')
			 {
				 m_nArabicNumberOutput += 50;

			 }
			 if (_inputString[i] == (char)'C')
			 {
				 if (_inputString[i + 1] == 'D' || _inputString[i + 1] == 'M')
				 {
					 m_nArabicNumberOutput -= 100;
				 }
				 else
				 {
					 m_nArabicNumberOutput += 100;
				 }
			 }
			 if (_inputString[i] == (char)'D')
			 {
				 m_nArabicNumberOutput += 500;
			 }
			 if (_inputString[i] == (char)'M')
			 {
				 m_nArabicNumberOutput += 1000;
			 }
		 }
		 else
		 {
			 if (_inputString[i] == (char)'I')
			 {
				 m_nArabicNumberOutput += 1;
			 }
			 if (_inputString[i] == (char)'V')
			 {
				 m_nArabicNumberOutput += 5;
			 }
			 if (_inputString[i] == (char)'X')
			 {
				 m_nArabicNumberOutput += 10;
			 }
			 if (_inputString[i] == (char)'L')
			 {
				 m_nArabicNumberOutput += 50;
			 }
			 if (_inputString[i] == (char)'C')
			 {
				 m_nArabicNumberOutput += 100;
			 }
			 if (_inputString[i] == (char)'D')
			 {
				 m_nArabicNumberOutput += 500;
			 }
			 if (_inputString[i] == (char)'M')
			 {
				 m_nArabicNumberOutput += 1000;
			 }
		 }
	 }
 
	 return m_nArabicNumberOutput;

 }

