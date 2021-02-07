#ifndef CHESSXX_CHESS_PIECE_H
#define CHESSXX_CHESS_PIECE_H
#include "Screen.h"
#include "ChessTeams.h"
namespace chessxx
{
    class ChessPiece
    {
        public:
            ChessPiece(int team_in, int materialValue_in)
            {
                team = team_in;
                materialValue = materialValue_in;
            }
            ~ChessPiece(void) {}
        protected:
            int team;
            int materialValue;
    };
}

#endif