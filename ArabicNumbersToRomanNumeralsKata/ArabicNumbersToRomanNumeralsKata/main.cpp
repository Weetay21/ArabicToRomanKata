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

	delete ArabicToRomanNumeral;

	cout << "\n\n\n";
	system("pause");
	return 0;
};