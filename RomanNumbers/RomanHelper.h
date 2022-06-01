#include <string>
#include <vector>
class RomanHelper {
public:
    RomanHelper();
    RomanHelper(unsigned int n);
    RomanHelper(std::string rn);

    bool RomanHelper::check_Roman(std::string rn);

    std::string to_roman(unsigned int n);
    std::string to_roman();

    int from_roman(std::string rn);
    int from_roman();

private:
    const std::vector <std::pair <unsigned int, std::string> > bases = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    unsigned int ArabicNumber;
    std::string RomanNumber;

};