#ifndef CHESSXX_Bishop_H
#define CHESSXX_Bishop_H

#include "ChessPiece.h"

namespace chessxx
{
    class Bishop : public ChessPiece
    {
        public:
            Bishop(int team_in);
            ~Bishop(void);
        private:
    };
}

#endif