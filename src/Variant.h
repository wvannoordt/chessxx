#ifndef CHESSXX_VARIANT_H
#define CHESSXX_VARIANT_H
#include "Board.h"
namespace chessxx
{
    class Variant
    {
        public:
            Variant(void){}
            virtual ~Variant(void){}
            Board* GetBoard(void) {return board;}
        protected:
            Board* board;
    };
}

#endif