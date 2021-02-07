#ifndef CHESSXX_BOARD_H
#define CHESSXX_BOARD_H

#include "Pieces.h"

namespace chessxx
{
    class Board
    {
        public:
            Board(int ranks_in, int files_in);
            ~Board(void);
            ChessPiece*& Piece(int file, int rank);
        private:
            int ranks, files;
            ChessPiece** pieces;
    };
}

#endif