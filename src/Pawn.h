#ifndef CHESSXX_Pawn_H
#define CHESSXX_Pawn_H

#include "ChessPiece.h"

namespace chessxx
{
    class Pawn : public ChessPiece
    {
        public:
            Pawn(int team_in);
            ~Pawn(void);
        private:
    };
}

#endif