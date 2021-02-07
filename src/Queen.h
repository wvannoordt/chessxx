#ifndef CHESSXX_Queen_H
#define CHESSXX_Queen_H

#include "ChessPiece.h"

namespace chessxx
{
    class Queen : public ChessPiece
    {
        public:
            Queen(int team_in);
            ~Queen(void);
        private:
    };
}

#endif