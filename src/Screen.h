#ifndef CHESSXX_SCREEN_H
#define CHESSXX_SCREEN_H
#include <iostream>
#include <string>
#include <exception>

namespace chessxx
{
    
    struct ChessxxException : public std::exception
    {
        const char* what() const throw()
        {
            return "(chessxx Exception)";
        }
    };
   
    static void WriteLine(std::string message)
    {
        std::cout << message << std::endl;
    }
    
    static void ChessError(std::string message)
    {
        WriteLine(message);
        throw ChessxxException();
    }
}

#endif