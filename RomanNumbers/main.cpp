#include "RomanHelper.h"
#include <iostream>
int main()
{
	RomanHelper RomanNumerals(4548);
	std::cout << RomanNumerals.to_roman();
}