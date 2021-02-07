#ifndef CHESSXX_STR_UTIL_H
#define CHESSXX_STR_UTIL_H

#include <string>

static std::string BufStr(std::string str, char bufVal, int n)
{
    std::string output = str;
    while (output.length() < n) output = bufVal + output;
    return output;
}

#endif