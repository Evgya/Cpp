#include "RomanHelper.h"

std::string RomanHelper::to_roman(unsigned int n)
{
    std::string RomanNum("");
    for (auto iter = begin(bases); iter != end(bases); )
    {
        if (n >= iter->first)
        {
            n -= iter->first;
            RomanNum += iter->second;
        }
        else
        {
            iter++;
        }

    }
    return RomanNum;
}
int RomanHelper::from_roman(std::string rn)
{
    auto iter = begin(bases);
    unsigned int ArabNum = 0;
    for (int i = 0; i < rn.length();)
    {
        if (rn.substr(i, 1) == iter->second)
        {
            ArabNum += iter->first;
            i++;
        }
        else if (rn.substr(i, 2) == iter->second)
        {
            ArabNum += iter->first;
            iter++;
            i += 2;
        }
        else
        {
            iter++;
        }
    }
    return ArabNum;
}