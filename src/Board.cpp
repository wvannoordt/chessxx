#include "Board.h"

namespace chessxx
{
    Board::Board(int ranks_in, int files_in)
    {
        ranks = ranks_in;
        files = files_in;
        pieces = new ChessPiece*[files*ranks];
        for (int i = 0; i < files*ranks; i++)
        {
            pieces[i] = NULL;
        }
    }
    
    ChessPiece*& Board::Piece(int file, int rank)
    {
        return pieces[file + rank*files];
    }
    
    Board::~Board(void)
    {
        for (int i = 0; i < files*ranks; i++)
        {
            if(pieces[i])
            {
                delete pieces[i];
                pieces[i] = NULL;
            }
        }
        delete [] pieces;
    }
}