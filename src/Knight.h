#ifndef CHESSXX_Knight_H
#define CHESSXX_Knight_H

#include "ChessPiece.h"

namespace chessxx
{
    class Knight : public ChessPiece
    {
        public:
            Knight(int team_in);
            ~Knight(void);
        private:
    };
}

#endif