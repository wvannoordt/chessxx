#ifndef CHESSXX_King_H
#define CHESSXX_King_H

#include "ChessPiece.h"

namespace chessxx
{
    class King : public ChessPiece
    {
        public:
            King(int team_in);
            ~King(void);
        private:
    };
}

#endif