#include "RomanHelper.h"
#include <iostream>
int main()
{
	RomanHelper RomanNumerals(3548);
	std::cout << RomanNumerals.to_roman(RomanNumerals.from_roman("XIII"));
}