#include "RomanHelper.h"

std::string RomanHelper::to_roman(unsigned int n)
{
    RomanNumber="";
    ArabicNumber = n;
    for (auto iter = begin(bases); iter != end(bases); )
    {
        if (n >= iter->first)
        {
            n -= iter->first;
            RomanNumber += iter->second;
        }
        else
        {
            iter++;
        }

    }
    return RomanNumber;
}
std::string RomanHelper::to_roman()
{
    if (ArabicNumber == 0)
    {
        RomanNumber = "";
        return "";
    }
    return to_roman(ArabicNumber);
}
int RomanHelper::from_roman(std::string rn)
{
    auto iter = begin(bases);
    ArabicNumber = 0;
    if (!check_Roman(rn))
    {
        RomanNumber = "";
        return 0;
    }
    for (int i = 0; i < rn.length();)
    {
        if (rn.substr(i, 1) == iter->second)
        {
            ArabicNumber += iter->first;
            i++;
        }
        else if (rn.substr(i, 2) == iter->second)
        {
            ArabicNumber += iter->first;
            iter++;
            i += 2;
        }
        else
        {
            iter++;
        }
    }
    return ArabicNumber;
}

int RomanHelper::from_roman()
{
    if (RomanNumber == "")
    {
        return 0;
    }
    return from_roman(RomanNumber);
}

RomanHelper::RomanHelper(unsigned int n)
{
    ArabicNumber = n;
    RomanNumber = "";
}
RomanHelper::RomanHelper(std::string rn)
{
    ArabicNumber = 0;
    if (!check_Roman(rn))
    {
        RomanNumber = "";
    }
    else
    {
        RomanNumber = rn;
    }
}
RomanHelper::RomanHelper()
{
    ArabicNumber = 0;
    RomanNumber = "";
}

bool RomanHelper::check_Roman(std::string rn)
{
    /*auto iter = bases.begin();

    for (int i = 0; i < rn.length();)
    {
        if (rn.substr(i, 1) == iter->second)
        {
            ArabicNumber += iter->first;
            i++;
        }
        else if (rn.substr(i, 2) == iter->second)
        {
            ArabicNumber += iter->first;
            iter++;
            i += 2;
        }
        else
        {
            iter++;
        }
    }
    return ArabicNumber;*/
    return true;
}