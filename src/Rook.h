#ifndef CHESSXX_Rook_H
#define CHESSXX_Rook_H

#include "ChessPiece.h"

namespace chessxx
{
    class Rook : public ChessPiece
    {
        public:
            Rook(int team_in);
            ~Rook(void);
        private:
    };
}

#endif