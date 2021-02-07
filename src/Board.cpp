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
    
    void Board::DebugPrint(void)
    {
        int wid = 12;
        std::string line = BufStr("", '-', wid*files + files + 1);
        WriteLine(line);
        for (int j = ranks-1; j >= 0; j--)
        {
            std::string bits = "|";
            for (int i = 0; i < files; i++)
            {
                ChessPiece*& p = Piece(i, j);
                if (p) bits += (Piece(i, j)->SimpleDisplayString() + "|");
                else bits += (BufStr("", ' ', 12) + "|");
            }
            WriteLine(bits);
            WriteLine(line);
        }
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