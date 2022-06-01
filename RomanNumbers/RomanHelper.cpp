#include "RomanHelper.h"

RomanHelper::RomanHelper()
{
    ArabicNumber = 0;
    RomanNumber = "";
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
    if (RomanNumber != "")
        return RomanNumber;

    return to_roman(ArabicNumber);
}

int RomanHelper::from_roman(std::string rn)
{
    auto iter = begin(bases);
    ArabicNumber = 0;    
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
        if (iter == bases.end())
        {
            RomanNumber = "";
            ArabicNumber = 0;
            return 0;
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

bool RomanHelper::check_Roman(std::string rn)
{
    auto iter = bases.begin();

    for (int i = 0; i < rn.length();)
    {
        if (rn.substr(i, 1) == iter->second)
        {            
            i++;
        }
        else if (rn.substr(i, 2) == iter->second)
        {            
            iter++;
            i += 2;
        }
        else
        {
            iter++;
        }
        if (iter == bases.end())
        {
            return false;
        }
    }
    return true;
}