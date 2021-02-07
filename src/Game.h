#ifndef CHESSXX_GAME_H
#define CHESSXX_GAME_H

#include "ChessVariants.h"
#include "Board.h"
#include "StandardVariant.h"

namespace chessxx
{
    class Game
    {
        public:
            Game(ChessVariant::ChessVariant variant);
            ~Game(void);
        
        private:
            Variant* rules;
    };
}

#endif